#include <stdio.h>
#include <string.h>
#include <Windows.h>

void reverse_string(char *str)
{
    int length = strlen(str);
    int con = 0;
    int swap = length - 1;
    char temp;
    for (int i = 0; i < length/2; i++)
    {
        if (con == swap) //Breaks loop if con is equal to swap to prevent overlapping in odd indexes
        {
            break;
        }
       else
        { 
            temp = str[con];        /*stores character in temp variable and 
                                      then swaps with last index number (total lenght)*/
            str[con] = str[swap];
            str[swap] = temp;
        }            
        con++;
        swap--;
    }
    printf("Reversed string: %s\n", str); //prints reversed string
}

