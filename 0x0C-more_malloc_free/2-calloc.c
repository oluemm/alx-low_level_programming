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

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	return (s);
}