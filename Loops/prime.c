#include <stdio.h>

void Prime_or_nah(int n)
{
    int i;
    int isPrime = 1;
     if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) //Happens when remainder from the division is 0
        {
            isPrime = 0; //default 1 switches to 0 
            break;
        }
    }

    if (isPrime) // 0 for false which means else runs and 1 for true
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
}

