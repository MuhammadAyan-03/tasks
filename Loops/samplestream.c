#include <stdio.h>
#include <stdbool.h>

int count_falling_edges(const bool signal[], int len)
{
    int count = 0;

    for (int i = 1; i < len; i++)          
    {
        if (signal[i - 1] == 1 && signal[i] == 0) /*loop for performing AND function to find 
                                                    when signal goes from high to low and 
                                                    incrementing count */
        {
            count++; 
        }
    }

    return count;
}

