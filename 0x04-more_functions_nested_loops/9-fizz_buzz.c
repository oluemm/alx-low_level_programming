#include <stdio.h>
/**
 * main - Entry point
 * Prints 1 - 100
 * tags Fizz, Buzz or FizzBuzz
 * Return: Always 0-- success
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (((num % 3) == 0)  && (num % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%i ", num);
		}
	}
	printf("\n");
	return (0);
}
