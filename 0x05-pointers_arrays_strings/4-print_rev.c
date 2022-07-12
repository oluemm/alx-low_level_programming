#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int i;

	/*Runs cursor to the end of the given string*/
	while (s[i] != '\0')
	{
		i++;
	}
	/*begins to print from the last string backward*/
	for (i = i - 1;i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
