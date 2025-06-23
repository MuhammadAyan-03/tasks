#include <stdio.h>
#include <stdint.h>

void unpack_4bit(uint8_t packed, uint8_t *high, uint8_t *low)
{
   *high = packed & 0xF0;  //To Extract bits 4-7;
   *low = packed & 0x0F;   //To Extract bits 0-3;
}

void Output(uint8_t out, uint8_t out2) //To print out the outputs
{
    printf("High:\n");
    for (int bit = 7; bit >= 0; bit--)
    {
        if (out & (1 << bit))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    printf("Low:\n");
        for (int bit = 7; bit >= 0; bit--)
    {
        if (out2 & (1 << bit))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}


