#include "am_mcu_apollo.h"
#include "am_bsp.h"

#include "uhal_sched.h"
#include "udrv_errno.h"
#include "am_log.h"

tcb_ thread_pool[THREAD_POOL_SIZE];
sys_tcb_ system_thread;

bool sched_start;
bool sched_pending;

// This file exists solely for compilation compatibility with legacy libraries
// Test if in interrupt mode
static inline bool isInISR(void)
{
  return (SCB->ICSR & SCB_ICSR_VECTACTIVE_Msk) != 0 ;
}

void uhal_sched_suspend(tcb_ *tcb)
{
    if (tcb == NULL) {
        return -UDRV_BUFF_OVERFLOW;
    }

    vTaskSuspend(tcb->task);
    tcb->suspended = true;
}

void uhal_sched_resume(tcb_ *tcb)
{
    if (tcb == NULL) {
        return -UDRV_BUFF_OVERFLOW;
    }

    if( isInISR() ) 
    {
        xTaskResumeFromISR(tcb->task);
    } 
    else
    {
        vTaskResume(tcb->task);
    }
    
    tcb->suspended = false;
}

void uhal_sched_init() 
{
}

static tcb_ *get_free_tcb(void) {
    /* Search thread pool */
    for (int i = 0 ; i < THREAD_POOL_SIZE ; i++) {
        if (thread_pool[i].valid == false) {
            return &thread_pool[i];
        }
    }
    return NULL;
}

/*
 * Creates a Thread for a function provided and adds it into execution queue
 */
int32_t uhal_sched_create_thread(char *name, function task) {
    tcb_ *tcb;

    tcb = get_free_tcb();  // Get the Next free TCB

    if (tcb == NULL) {
        am_log_inf("Thread buffer overflow!");
        return -UDRV_BUFF_OVERFLOW;
    }

    strncpy(tcb->name, name, 31);
    tcb->name[31] = '\0';
    tcb->valid = true;

    BaseType_t xReturned = 
        xTaskCreate(
            (TaskFunction_t) task,
            tcb->name,
            TASK_STACK_SIZE,
            NULL,
            RAK_TASK_PRIO_LOW,
            &tcb->task
        );

    if(xReturned != pdPASS)
    {
        memset(tcb->name, 0, 32);
        tcb->valid = false;
        tcb->task = NULL;
        tcb->suspended = false;
        return -UDRV_INTERNAL_ERR;        
    }

    am_log_inf("Create thread: %s", tcb->name);
    uhal_sched_suspend(tcb);
    return UDRV_RETURN_OK;
}

/*
 * Creates a System Thread for a function provided and adds it into execution queue
 */
void uhal_sched_create_sys_thread(char *name, function task) {
    sys_tcb_ *tcb = &system_thread;  // Get the Next free TCB

    if (tcb == NULL) {
        return;
    }

    strncpy(tcb->name, name, 31);
    tcb->name[31] = '\0';
    tcb->valid = true;

    BaseType_t xReturned = 
        xTaskCreate(
            (TaskFunction_t) task,
            tcb->name,
            TASK_STACK_SIZE,
            NULL,
            RAK_TASK_PRIO_LOW,
            &tcb->task
        );

    if(xReturned != pdPASS)
    {
        memset(tcb->name, 0, 32);
        tcb->valid = false;
        tcb->task = NULL;
        return;        
    }

    am_log_inf("Create thread: %s", tcb->name);
}

void uhal_sched_destroy_thread(tcb_ *tcb) {
    
    if (tcb == NULL) {
        return;
    }
    taskENTER_CRITICAL();

    vTaskDelete(tcb->task);
    memset(tcb->name, 0, 32);
    tcb->valid = false;
    tcb->task = NULL;
    tcb->suspended = false;

    taskEXIT_CRITICAL();
}

void uhal_sched_destroy_myself(void) {
    
    taskENTER_CRITICAL();

    TaskHandle_t current_task = xTaskGetCurrentTaskHandle();

    /* Search thread pool */
    for (int i = 0 ; i < THREAD_POOL_SIZE ; i++) {
        if (thread_pool[i].task == current_task) {
            am_log_inf("Delete task: %s", thread_pool->name);
            vTaskDelete(current_task);
            memset(thread_pool[i].name, 0, 32);
            thread_pool[i].valid = false;
            thread_pool[i].task = NULL;
            thread_pool[i].suspended = false;
        }
    }

    taskEXIT_CRITICAL();
}

void uhal_sched_lock(void) {
    sched_pending = true;
}

void uhal_sched_unlock(void) {
    sched_pending = false;
}

bool uhal_sched_run_queue_empty(void) {
    /* Search thread pool */
    for (int i = 0 ; i < THREAD_POOL_SIZE ; i++) {
        if (thread_pool[i].valid == true) {
            return false;
        }
    }
    return true;
}