#include <stdio.h>
#include <string.h>

void split_command(const char *cmd)
{
    int length = strlen(cmd);
    char* token = strtok(cmd, " "); /*Each word before and after spaces are
                                      considered as tokens and spaces are delimiters*/
    while (token != '\0')
    {
        printf("%s\n", token); //prints each token into their own line
        token = strtok('\0', " ");
    }
}

