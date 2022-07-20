#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string passed in
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{/*if the pointer isn't a null byte*/
		_print_rev_recursion(s + 1);
		/*call function and move cursor one step forward*/
		_putchar(*s);/*print out the last character*/
	}
	else
	{
		_putchar('\0');/*print out end of string i.e null byte*/
	}
}
