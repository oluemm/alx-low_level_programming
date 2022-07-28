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
	int i = 0, j = min;

	if (min > max)
		return (0);
	size = max - min;
	ptr = malloc((size + 1) * (sizeof(*ptr)));
	if (!ptr)
		return (0);
	while (i <= max - min)
		ptr[i++] = j++;
	return (ptr);
}
