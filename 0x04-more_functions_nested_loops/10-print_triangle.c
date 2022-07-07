#include "main.h"
/**
 * print_triangle - entry
 * @size: user given size of triangle
 * prints a triangle followed by a new line
 */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		k = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = k; j > 0; j--)
			{
				_putchar(' ');
			}
			for (l = 0; l <= i; l++)
			{
				_putchar(35);
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
