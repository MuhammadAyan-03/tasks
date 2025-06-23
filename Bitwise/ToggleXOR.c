#include <stdio.h>
#include <stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t bit_pos)
{
    return reg ^ (1 << bit_pos); /*toggling bit position 4 using XOR 
                                   when B = 1 then bit number at A toggles*/
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
