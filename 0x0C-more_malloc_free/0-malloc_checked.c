#include "main.h"
/**
 * malloc_checked - allocates memory for using malloc
 * @b: bytes to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem);
	}
}
