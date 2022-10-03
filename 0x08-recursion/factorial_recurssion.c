#include <stdio.h>

unsigned long int  fact (unsigned int n)
{
    unsigned long int factorial;
    if (n <= 1)
    {
        return (1);
    }
    else
    {
        factorial = n * fact(n-1);
    }
    return (factorial);
}

void main(void)
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("Factorial of %d is : %ld\n",n,fact(n));
}
