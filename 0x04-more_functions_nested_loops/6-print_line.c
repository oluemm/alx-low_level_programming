#include "main.h"
/**
 * print_line - starts
 * @n: input
 */

void print_line(int n)
{
	int a, k;

	k = 95;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
