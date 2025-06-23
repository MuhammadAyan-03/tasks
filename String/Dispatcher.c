#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef enum { CMD_SET, CMD_READ, CMD_INVALID } CommandType;

CommandType parse_command(const char *input)
{
    char command[10];
    sscanf(input, "%s", command);  // Extracts the first word and puts in command

    if (strcmp(command, "SET") == 0) /*Then it is compared with if conditions
                                       to see what type of command is inputed*/
    {
        return CMD_SET;
    }
    else if (strcmp(command, "READ") == 0)
    {
        return CMD_READ;
    }
    else
    {
        return CMD_INVALID;
    }
}

void execute_command(CommandType cmd)
{
    switch (cmd)
    {
        case CMD_SET:
            printf("Executing SET command\n");
            break;
        case CMD_READ:
            printf("Executing READ command\n");
            break;
        case CMD_INVALID:
            printf("Invalid command\n");
            break;
    }
}


