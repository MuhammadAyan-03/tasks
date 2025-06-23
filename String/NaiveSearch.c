#include <stdio.h>
#include <string.h>

char *my_strstr(const char *haystack, const char *needle)
{
    char *p;
    p = strstr(haystack, needle); /*haystack is the main string and we 
                                    are finding the needle substring inside
                                    this main string*/
    if (p)
    {
        printf("Banana's were found in string\n");
        printf("first occurence in '%s' is \n'%s'\n", haystack, p); /*prints the location of 
                                                                      the string in the main sentence
                                                                      haystack*/
    }
    else
    {
        printf("Banana's were not found\n");
    }
}

