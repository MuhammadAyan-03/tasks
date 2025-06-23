#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void set_gpio(uint8_t *port, uint8_t pin) // set the value of the pin at specific bits
{
    *port = *port | (1 << pin);
}

void clear_gpio(uint8_t *port, uint8_t pin) // clear the value of the pin at specific bits
{
    *port = *port & ~(1 << pin);
}

bool read_gpio(uint8_t port, uint8_t pin) // Read the value of the pin at specific bits
{
    return (port & (1 << pin)) != 0; 
}

void Output(uint8_t masked) //prints Output
{
    for (int bit = 7; bit >= 0; bit--)
    {
        if (masked & (1 << bit))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

