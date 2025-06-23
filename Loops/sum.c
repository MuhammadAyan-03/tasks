#include <stdio.h>

int sum_upto_n(int n)
{
    int x = 1;
    int sum = 0;

    if (n < 1) 
    {
        printf("Please enter a positive number greater than 0.\n");
        return 1;
    }

    while (x <= n) /*for summing incrementing the multiplied upto 
                     the input number typed for the sum upto that number*/
    {
        sum = sum + x;
        x++;
    }

    return sum; //return to int result = sum_upto_n(n)
    
}

