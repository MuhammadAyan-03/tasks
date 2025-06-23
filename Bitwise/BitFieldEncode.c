#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define SENSOR_TEMP    (1 << 0) //00000001
#define SENSOR_PRESS   (1 << 1) //00000010
#define SENSOR_VIB     (1 << 2) //00000100


uint8_t encode_sensors(bool temp, bool press, bool vib) /*Gives values based on what sensor is on (true)
                                                          in the main function and what is off (false) by
                                                          Bitwise ANDing them with 0*/
{
    uint8_t status = 0;

    if (temp)
       status = status | SENSOR_TEMP;

    if (press)
        status = status | SENSOR_PRESS;

    if (vib)
        status = status | SENSOR_VIB;

    return status;
}

void Output(uint8_t out) //prints output 
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

