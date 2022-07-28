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

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (p2 == NULL)
		return (0);
	if (new_size > old_size)
	{
		p1 = malloc(new_size * sizeof(char));
		p2 = ptr;
		for (i = 0; i < old_size; i++)
		{
			p1[i] = p2[i];
		}
		free(ptr);
		return (p1);
	}
}
