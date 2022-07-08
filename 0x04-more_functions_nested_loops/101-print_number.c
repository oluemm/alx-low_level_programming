#include "main.h"
/**
 * print_number - prints an integer
 * @n: given integer to print
 */
void print_number(int n)
{
	char sign;

	if (n < 0)
	{
		sign = '-';
		n = -1 * n;
		_putchar(sign);
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');/*first digit*/
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n % 100) / 10) + '0');/*third digit*/
		_putchar(((n % 100) % 10) + '0');/*last*/
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');/*first digit*/
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 100) + '0');/*third digit*/
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
