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
	/*initializing i to use in looping thru lists*/
	unsigned int i;
	int sum = 0; /*sum of args*/

	va_list args; /*list used to access arguments*/
	/*start iterating the arguments with args*/
	va_start(args, n);
	/*check if number of arguments is 0 and return 0*/
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		/*add the current arg to sum*/
		sum += va_arg(args, int);
	va_end(args); /*end the iterator and free the va_list*/
	return (sum);
}
