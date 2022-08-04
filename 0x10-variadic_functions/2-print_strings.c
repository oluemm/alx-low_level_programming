#include "variadic_functions.h"
/**
 * print_strings - print strings to stdout
 * @separator: separator
 * @n: number of strings to print
 * @...: optional arguments to be printed
 * Returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list wrds;
	char *strig;

	va_start(wrds, n);
	for (i = 0; i < n; i++)
	{
		strig = va_arg(wrds, char *);
		if (strig)
			printf("%s", strig);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(wrds);
}