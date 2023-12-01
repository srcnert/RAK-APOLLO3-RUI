#include "uhal_wdt.h"

#include "am_mcu_apollo.h"
#include "am_util.h"

am_hal_wdt_config_t g_sWatchdogConfig;

void uhal_wdt_feed(void)
{
    //
    // Restart the watchdog.
    //
    am_hal_wdt_restart();
}

void uhal_wdt_init(uint32_t period)
{
    uint32_t reset_count = (period*16);
    reset_count = (reset_count/1000.0f);

    g_sWatchdogConfig.ui32Config = _VAL2FLD(WDT_CFG_CLKSEL, WDT_CFG_CLKSEL_16HZ) |
                                    AM_HAL_WDT_ENABLE_RESET |
                                    AM_HAL_WDT_ENABLE_INTERRUPT;
    g_sWatchdogConfig.ui16InterruptCount = 0;
    g_sWatchdogConfig.ui16ResetCount = reset_count;

    //
    // LFRC has to be turned on for this example because the watchdog only
    // runs off of the LFRC.
    //
    am_hal_clkgen_control(AM_HAL_CLKGEN_CONTROL_LFRC_START, 0);

    //
    // Configure the watchdog.
    //
    am_hal_wdt_init(&g_sWatchdogConfig);

    //
    // Enable the watchdog.
    //
    am_hal_wdt_start();
}
