#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums all the numbers passed as arguments
 * @n: Number of arguments to be summed
 * @...: The arguments to be summed
 * Return: The sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
