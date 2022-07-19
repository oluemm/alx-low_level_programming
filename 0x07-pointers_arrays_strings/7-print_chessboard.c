#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: I don't grasp this yet
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int y = 0;

		while (y < 8)
		{
			_putchar (a[i][y]);
			y++;
		}
		_putchar ('\n');
		i++;
	}
}
