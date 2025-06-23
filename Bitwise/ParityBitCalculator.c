#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool calculateEvenparity(uint8_t byte)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (byte & (1 << i)) // Check if bit i is set
        { 
            count++;
        }
    }
    return (count % 2 == 0);  // true if even number of 1s
}

