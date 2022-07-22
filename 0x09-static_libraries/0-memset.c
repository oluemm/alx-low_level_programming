#include "main.h"
/**
 * _memset - replaces the output values of a given array s
 * @s: array to be manipulated
 * @b: character used to replace
 * @n: number of bytes (spaces) to replace in the array
 * Return: Returns the changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;/*initialize and iterator i*/

	for (i = 0; i < n; i++)/*loop thru array; stop at user defined point*/
	{
		s[i] = b;/*dereferencing each given value of the array*/
	}
	return (s);/*return the array*/
}
