#include <stdio.h>
#include <stdbool.h>

bool system_health_ok(bool sensor_ok, bool memory_ok, bool watchdog_triggered)
{
    return sensor_ok && memory_ok && !watchdog_triggered; /*when all of them give true condition then and only then 
                                                            is system healthy otherwise it returns false which leads
                                                            to the if statement with system unhealthy*/
}


