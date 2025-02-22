#include "wiring_time.h"
#include "udrv_rtc.h"
#include "udrv_timer.h"

unsigned long seconds()
{
    uint64_t ts = udrv_rtc_get_timestamp((RtcID_E)SYS_RTC_COUNTER_PORT); 
    return ts / 1000;
}

unsigned long millis()
{
    return udrv_rtc_get_timestamp((RtcID_E)SYS_RTC_COUNTER_PORT);
}

unsigned long micros()
{
    return udrv_rtc_get_us_timestamp((RtcID_E)SYS_RTC_COUNTER_PORT);
}

unsigned long systick_micros()
{
    return udrv_get_microsecond();
}
