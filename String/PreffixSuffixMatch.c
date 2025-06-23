#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool starts_with(const char *str, const char *prefix)
{
    char *p;
    p = strstr(str, prefix); /*strstr used for the purpose of 
                               finding the prefix in the given string*/
    if (p)
    {
        printf("Preffix found and matched(end with the given keyword '%s')!\n\n", prefix);
    }
    else
    {
        printf("Preffix not found");
    } 
}

bool ends_with(const char *str, const char *suffix)
{
        char *p;
    p = strstr(str, suffix); /*strstr used for the purpose of 
                               finding the suffix in the given string*/
    if (p)
    {
        printf("Suffix found and matched (end with the given keyword '%s')!\n\n", suffix);
    }
    else
    {
        printf("Suffix not found");
    }
}

