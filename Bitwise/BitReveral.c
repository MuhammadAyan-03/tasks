#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t byte)
{
    uint8_t reversed = 0;

        for (int i = 0; i < 8; i++)
        {
            reversed <<= 1; // Shift reversed left to make room for next bit
            reversed = reversed | (byte & 1); // Add the least significant bit of byte          
            byte >>= 1; // Shift byte right to move to next bit
        }

    return reversed;
}
void Output(uint8_t out)
{
    for (int bit = 7; bit >= 0; bit--)
    {
        if (out & (1 << bit))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

