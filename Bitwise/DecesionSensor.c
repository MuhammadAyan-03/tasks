#include <stdio.h>
#include <stdbool.h>

bool should_alert(int temp, int pressure, bool enabled)
{
    if (enabled && (temp > 80 || pressure < 30)) //Alert is sounded when either one is true
        return true;
    else
        return false;
}

