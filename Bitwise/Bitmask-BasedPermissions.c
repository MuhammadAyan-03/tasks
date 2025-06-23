#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#define PERM_READ  (1 << 0) //00000001
#define PERM_WRITE (1 << 1) //00000010
#define PERM_EXEC  (1 << 2) //00000100

bool has_permission(uint8_t user_perm, uint8_t required_perm) /*current user permissions are given by 
                                                                bitwise OR of the things you want the 
                                                                user to be able to access*/
{
    return (user_perm & required_perm) == required_perm;
}
