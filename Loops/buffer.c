#include <stdio.h>

void print_circular_buffer(int *buffer, int size, int start, int count) /*Buffer is an array and 
                                                                          size is being determined 
                                                                          by sizeof(buffer)/sizeof(buffer[0])*/
{
    for (int i = 0; i < count; i++)
    {
        int index = (start + i) % size;  
        printf("%d ", buffer[index]);
    }
    printf("\n");
}