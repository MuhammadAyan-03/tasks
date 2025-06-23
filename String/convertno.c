#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int parse_int(const char *str)
{
    char *token;
    char *token2;
    token = strtok(str, "="); 
    token2 = strtok(NULL, "="); /*Extracts Numbers that written after
                                 '=' sign and put them into token2*/
    printf("%s\n", token2);
}

float parse_float(const char *str)
{
    char *token;
    char *token2;
    token = strtok(str, "="); 
    token2 = strtok(NULL, "="); /*Extracts Numbers that written after
                                 '=' sign and put them into token2*/
    printf("%s\n", token2);
}

