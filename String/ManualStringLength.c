#include <stdio.h>

int my_strlen(const char *str) //recieves a string message from a char array
{
    int length = 0;
    while (str[length] != '\0') // Loop until null-terminator is found
    {
        length++;
    }
    return length;
}

