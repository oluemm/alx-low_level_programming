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
		return (NULL);
	size = max - min;
	ptr = (int *)malloc((size + 1) * (sizeof(int *)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j <= max)
	{
		ptr[i] = j;
		j++;
		i++;
	}
	return (ptr);
}
