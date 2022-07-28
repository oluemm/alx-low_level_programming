#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr = malloc((size + 1) * (sizeof(int *)));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	int i = 0, j = min;

	while (j <= max)
	{
		ptr[i] = j;
		j++;
		i++;
	}
	return (ptr);
}
