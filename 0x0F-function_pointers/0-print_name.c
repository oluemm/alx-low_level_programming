#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	/*check for nulls or broken function*/
	{
		return;
	}
	f(name);
}
