#include <stdio.h>

void rowstotriangles(int n)
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) //for number of stars for each row
        {
            printf("*");
        }
        printf("\n"); 
    } 
}

