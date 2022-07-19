#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
    int sum1 = 0;
    int sum2 = 0;
    

    int i = 0;
    int y = 0;

    while (i < (size*size))
    {
        if ((i % (size+1)) == 0)
        {
            sum1 +=a[i];
        }
        i++;
    }
    

    while ( y < ((size*size)-1))
    {
        if ((y % (size-1)) == 0)
        {
            sum2 +=a[y];
        }
        y++;
    }
    printf("%d, %d \n",sum1,sum2);
}
