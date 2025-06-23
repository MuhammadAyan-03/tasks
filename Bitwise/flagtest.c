#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define FLAG_TX_READY  (1 << 0) //00000001
#define FLAG_RX_READY  (1 << 1) //00000010
#define FLAG_ERROR     (1 << 2) //00000100


bool is_flag_set(uint8_t status, uint8_t flag) /*Status is Bitwise OR of FLAG_TX_READY and FLAG_ERROR*/
{
    return (status & flag) != 0; /*Bitwise AND and only return the true conditions. 
                                   Also returns to a bunch of if conditions to determine 
                                   which is active*/
}

