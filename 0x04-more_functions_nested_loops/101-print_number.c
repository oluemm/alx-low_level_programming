#include "main.h"
/**
 * print_number - prints an integer
 * @n: given integer to print
 */
void print_number(int n)
{
	short len, val, itr, exp, cache;

	val = n;
	exp = len = 1;
/*Check for negative values*/
	if (val < 0)
	{
		val *= -1;
		_putchar('-');
	}
	cache = val;
	while (cache >= 10)
	{
		len++;
		cache = cache / 10;
	}
	for (itr = 1; itr < len; itr++)
	{
		exp *= 10;
	}
	while (exp > 1)
	{
		_putchar((val / exp) % 10 + '0');
		exp /= 10;
	}
	_putchar(val % 10 + '0');
}
