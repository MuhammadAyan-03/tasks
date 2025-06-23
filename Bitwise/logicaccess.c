#include <stdio.h>
#include <stdbool.h>

bool check_access(bool is_admin, bool has_token)
{
    if (is_admin || has_token) /*Logical OR condition to ensure it only grants access
                                 to either and not neither and when it is neither the 
                                 if condition will be 0 thus false and automatically 
                                 shift to else*/
    {
        printf("Access granted\n");
        return true;
    }
    else
    {
        printf("Access denied\n");
        return false;
    }
}

