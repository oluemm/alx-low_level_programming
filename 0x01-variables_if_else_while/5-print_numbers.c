#include <stdio.h>
/**
 * main -Program entry point
 * Program prints out the numbers from 0 - 9
 * Return: 0 on success, 1 on error
 */

int main(void)
{
	int num;

	for (num = 0; num <10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}
