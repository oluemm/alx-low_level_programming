#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	/*Runs cursor to the end of the given string*/
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	/*begins to print from the last string backward*/
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
