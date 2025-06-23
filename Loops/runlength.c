#include <stdio.h>
#include <string.h>

void run_length_encode(const char *input)
{
    int length = strlen(input);

    for (int i = 0; i < length; )
    {
        char current = input[i];
        int count = 1;

        while (i + count < length && input[i + count] == current) /*counts how many times 
                                                                    each character repeats*/
        {
            count++;
        }

        printf("%c%d", current, count);

        i = i + count;
    }

    printf("\n");
}

