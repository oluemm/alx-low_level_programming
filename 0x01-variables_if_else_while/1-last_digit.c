#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * This simple programme checks if a number is
 * greater than 5, 0 or less than 6 and not 0
 * Return: Always 0 to show success
 */

int main(void)
{
	int n;
	char CONST;
	CONST = printf("Last digit of ");
	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	CONST;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("%i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%i and is 0\n", n);
	}
	else
		printf("%i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
