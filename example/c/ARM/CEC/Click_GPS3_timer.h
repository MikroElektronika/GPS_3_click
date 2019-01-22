/*

Use mikroE Timer Calculator to generate proper timer configuration
and timer ISR.

https://www.mikroe.com/timer-calculator

*/
#include "Click_GPS3_types.h"

uint32_t timerCounter = 0;

static void gps3_configTimer()
{


    // Configure Timer
}

void Timer_interrupt()
{
    gps3_tick();
	timerCounter++;
    // Reset Flag
}