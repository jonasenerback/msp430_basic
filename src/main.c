

#include <msp430.h>
#include "led.h"
#include "drivers/io.h"

int main(void)
{
    volatile unsigned int i;
    WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
    led_init();
    io_set_direction(1,1);

    while(1)
    {
        led_toggle();                      // Toggle P1.0 using exclusive-OR
        for (i=10000; i>0; i--);
  }
}
