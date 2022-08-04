#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: separator-string to be printed between numbers
 * @n: number of numbers to be printed
 * @...: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;
	va_list args;
	int sum;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, int);
		printf("%d", sum);
		if (i < n - 1)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				printf("%c", separator[j]);
			}
		}
	}
	printf("\n");
	va_end(args);
}
