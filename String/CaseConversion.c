#include <stdio.h>
#include <ctype.h>   // for toupper()

void strtoupper(char *str)
{
    if (str == NULL) return;
    while (*str != '\0') // Loop until null-terminator is found
    {
        *str = (char)toupper((unsigned char)*str);  // cast for portability
        str++;
    }
}


