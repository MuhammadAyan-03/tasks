#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void clean_spaces(char *str)
{
    int i = 0;
    int j = 0;
    bool space_found = false;

    while (str[i] == ' ') //removes leading spaces
    {
        i++;
    }

    while (str[i] != '\0')
    {
        if (str[i] != ' ') /*condition if there is not a space, copies i into j and increments*/
        {
            str[j++] = str[i++];
            space_found = false;
        }
        else
        {
            if (!space_found) /*condition for a space if it is found,
                                adds a single space to j string and put
                                space found aas true so the loop doesnt
                                repeat and the more an one space isnt added*/
            {
                str[j++] = ' ';
                space_found = true;
            }
            i++;
        }
    }
    str[j] = '\0';
}

