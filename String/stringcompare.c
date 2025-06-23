#include <stdio.h>
#include <ctype.h>

int strcmp_case_insensitive(const char *a, const char *b)
{
    if (a == NULL || b == NULL)
        return -1;  // error: one of the strings is null

    while (*a != '\0' && *b != '\0') //loops until both strings are fully read
    {
        char ca = (char)tolower((unsigned char)*a);
        char cb = (char)tolower((unsigned char)*b);

        if (ca != cb) //if does not equal each other
        {
            return (unsigned char)ca - (unsigned char)cb;
        }
        a++;
        b++;
    }
    // If one ends earlier than the other
    return (unsigned char)tolower((unsigned char)*a) - 
           (unsigned char)tolower((unsigned char)*b);
} //if function does 0 then strings are equal and if condition becomes true otherwise they are different


