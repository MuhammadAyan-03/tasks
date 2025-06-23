#include <stdio.h> 
#include <stdbool.h>
#include <stdint.h>

// Extract bits 5 to 3
uint8_t extract_bits(uint8_t reg)
{
    uint8_t mask = 0b00011000;      // bits 5,4,3
    uint8_t masked = (reg & mask);  // bitwise AND which cause all other unwanted bits to become zero thus being "Extracted"
    return masked >> 3;             // shifts right
}
void Output(uint8_t masked)
{
    for (int bit = 7; bit >= 0; bit--) //printing output using bitshift
    {
        if (masked & (1 << bit))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

