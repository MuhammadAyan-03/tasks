#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void format_sensor_json(char *out, const char *name, float value)
{
    sprintf(out, "{\"sensor\":\"%s\",\"value\":%.2f}", name, value); /*prints the entire format with
                                                                       values and names into out which
                                                                       then you can directly output with
                                                                       printf*/
}

