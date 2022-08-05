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

	va_start(wrds, n); /*start iterating the arguments with args for n times*/
	for (i = 0; i < n; i++)
	{
		strig = va_arg(wrds, char *); /*assign sting to strig at each run*/
		if (strig)					  /*check if the arg/string is not null*/
			printf("%s", strig);
		else
			printf("(nil)"); /*print (nil) if null*/
		/*print separator as long as it is not null & i is not at the last args*/
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(wrds);
}
