#include "main.h"
/**
 * swap_int - swaps the values of two integer-holding variables.
 * i.e. if a = 44 and b = 90
 * swap_int === a = 90 , b = 44
 * @a:first integer
 * @b:second integer
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
