#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - print all arguments
 * @format: format string
 * @...: arguments
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	int num_args = strlen(format);

	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; i < num_args; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			printf("%s", va_arg(args, char *));
			break;
		default:
			printf("%s", "(nil)");
			break;
		}
		if (i < num_args - 1)
			printf(", ");
	}
	printf("\n");
}
