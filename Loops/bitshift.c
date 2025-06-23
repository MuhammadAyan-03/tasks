#include <stdio.h>
#include <stdint.h>
#include <windows.h> 

void simulate_led_shift()
{
    uint8_t leds = 0b00000001;  //used for exact 8 bit integer

    for (int i = 0; i < 8; i++)
    {
        for (int bit = 7; bit >= 0; bit--) //prints out the 8 bits of the LED
        {
            if (leds & (1 << bit)) 
                printf("1");
            else
                printf("0");
        }
        printf("\n");
        Sleep(500);  

        leds <<= 1; //shifts all bits to the left and back into the led
    }
}


