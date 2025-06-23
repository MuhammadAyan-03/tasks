#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool parse_kv_pair(const char *input, char *key, char *value)
{
    key = strtok(input, "="); /*treats key as token and splits 
                                everything in input up to '=' 
                                into key token*/
    printf("%s\n", key);
    value = strtok(NULL, "="); /*treats value as second token and
                                 splits everything after '=' into
                                 value token. Also everything before
                                 is treated like NULL since it is already
                                 split into key token*/
    printf("%s\n", value);
}

