#ifndef __UHAL_SCHED_H__
#define __UHAL_SCHED_H__

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "portmacro.h"
#include "portable.h"
#include "rtos.h"

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define TASK_STACK_SIZE  2048
#define THREAD_POOL_SIZE 5

typedef void (*function) (void);

typedef struct tcb__ {
    char name[32];
    TaskHandle_t task;
    bool valid;
    bool suspended;
} tcb_;

typedef struct sys_tcb__ {
    char name[32];
    TaskHandle_t task;
    bool valid;
} sys_tcb_;

void uhal_sched_destroy_myself(void);

tcb_ *uhal_sched_get_tcb_by_name(char *name);
void uhal_sched_add_tcb_to_run_queue(tcb_ *tcb);
void uhal_sched_add_tcb_to_sleep_queue(tcb_ *tcb);
int32_t uhal_sched_create_thread(char *name, function task);
void uhal_sched_destroy_thread(tcb_ *tcb);
void uhal_sched_lock(void);
void uhal_sched_unlock(void);
bool uhal_sched_run_queue_empty(void);

void uhal_sched_suspend(tcb_ *tcb);
void uhal_sched_resume(tcb_ *tcb);

#endif
