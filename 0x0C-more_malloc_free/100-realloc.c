#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: pointer to memory for old string
 * @old_size: size of old string
 * @new_size: size of new string
 * Return: pointer to new string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p1, *p2;

	if (ptr != NULL)
		p1 = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	for (i = 0; (i < new_size || i < old_size); i++)
	{
		p2[i] = p1[i];
	}
	free(ptr);
	return (p2);
}