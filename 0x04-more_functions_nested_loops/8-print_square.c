#include "main.h"

/**
 * print_square - start here
 * @size: size of the square
 */

void print_square(int size)
{
	int len, bdt;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (bdt = 0; bdt < size; bdt++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
