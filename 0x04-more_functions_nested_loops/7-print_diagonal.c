#include "main.h"
/**
 * print_diagonal - starts here
 * @n: number of times to print "\"
 */
void print_diagonal(int n)
{
	int a, k;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (k = 0; k < a; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
