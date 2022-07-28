#include "main.h"
/**
 * _calloc - calloc function
 * @nmemb: number of bytes allocated
 * @size: size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++) /*loop thru array; stop at user defined point*/
	{
		s[i] = 0; /*dereferencing each given value of the array*/
	}
	return (s);
}
