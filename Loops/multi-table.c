#include <stdio.h>

void multi(int x)
{
    int ans;
    for (int i = 1; i <= 10; i++) /*for incrementing the number by 
                                    which input is multiped upto 10*/
    {
        ans = x * i;
        printf("%d", ans);
        printf("\n");
    }
}
