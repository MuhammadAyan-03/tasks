#include <stdio.h>


void even_to_print(int a, int b) //for sequencing
{
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Even numbers between %d and %d are:\n", a, b);

    for (int i = a; i <= b; i++) 
    {
        if (i % 2 == 0)     //To distinguish even from odd
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

