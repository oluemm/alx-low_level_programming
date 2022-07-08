#include <stdio.h>
/**
 * main - starts here
 * program prints prime factors
 * Return: 0 on success
 */

int main(void)
{
	long int num, fac;

	num = 612852475143;
	for (fac = 2; fac < num; fac++)
	{
		if (num % fac == 0)
		{
			num = num / fac;
		}
		else
		{
			continue;
		}
		printf("%li\n", fac);
	}
	return (0);
}
