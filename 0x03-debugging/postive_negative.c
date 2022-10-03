#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * This simple programme checks if a number is
 * +ve, -ve or zero
 * Return: Always 0 to show success
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
}
