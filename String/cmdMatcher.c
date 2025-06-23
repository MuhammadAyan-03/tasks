#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const char *match_command(const char *input)
{
    char list[] = "SET TEMP 25";
    int length = strlen(input);
    int compared = strcasecmp(input, list); /*Gives 0 if both input cmd and list cmd are equal
                                              regardless of case, > 0 if input string is larger
                                              and not equal to list string and <0 if list string
                                              is larger and not equal to input string*/

    if (compared > 0)
    {
        printf("Command doesnt match regardless of case");
    }
    else if (compared < 0)
    {
        printf("Command doesnt match regardless of case");
    }
    else
    {
        printf("Command matches regardless of case");
    }
}
