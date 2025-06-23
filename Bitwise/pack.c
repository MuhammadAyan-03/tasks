#include <stdio.h>
#include <stdint.h>

uint8_t pack_4bit(uint8_t high, uint8_t low)
{
    high &= 0x0F;  // mask to only keep the first 3 bits
    low  &= 0x0F;

    return (high << 4) | low; /*shift 4 to the left for high and
                                bitwise OR to pack them both together*/
}

void Output(uint8_t out) //To print out the output 
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

