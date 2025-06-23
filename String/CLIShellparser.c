#include <stdio.h>
#include <string.h>

typedef struct {
    char param[16];
    char value[16];
} Param;

void cli_shell()
{
    Param p;
    char input[18];     
    char command[10];   //command holder for if conditions and comparison
    char param[] = "Integer";
    char value[] = "56";
    printf("Enter command (SET / GET / LIST): ");
    fgets(input, sizeof(input), stdin);

    sscanf(input, "%s", command);   //scan string input and puts it in command

    if (strcmp(command, "SET") == 0) //if conditions to identity command
    {
        strcpy(p.param, param);
        strcpy(p.value, value);
        printf("SET <%s> <%s>\n", p.param, p.value);
    }
    else if (strcmp(command, "GET") == 0)
    {
        strcpy(p.param, param);
        printf("GET <%s>\n", p.param);
    }
    else
    {
        printf("Example commands:\n");
        printf("  SET <param> <value>\n");
        printf("  GET <param>\n");
    }
}

