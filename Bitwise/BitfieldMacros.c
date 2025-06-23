#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define SET_BIT(reg, bit)     ((reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit)   ((reg) &= ~(1 << (bit)))
#define TOGGLE_BIT(reg, bit)  ((reg) ^= (1 << (bit)))
#define READ_BIT(reg, bit)    (((reg) >> (bit)) & 1)

typedef struct 
{
    uint8_t direction;  // 1 = output, 0 = input
    uint8_t output;     
    uint8_t input;      
} GPIO_Port;

void set_pin_direction(GPIO_Port *port, uint8_t pin, bool is_output) 
{
    if (is_output)
        SET_BIT(port->direction, pin);
    else
        CLEAR_BIT(port->direction, pin);
}

void write_pin(GPIO_Port *port, uint8_t pin, bool value) // write to output register
{
    if (READ_BIT(port->direction, pin)) // reads at pin number
    {
        if (value)
            SET_BIT(port->output, pin);
        else
            CLEAR_BIT(port->output, pin);
    }
}

bool read_pin(GPIO_Port *port, uint8_t pin) // read from input register
{
    if (!READ_BIT(port->direction, pin))
        return READ_BIT(port->input, pin);
    else
        return READ_BIT(port->output, pin); 
}

