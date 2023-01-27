#include "search_algos.h"

/**
 * linear_search - search for a given value in an array
 * @value: value searched for
 * @array: integer array to search through
 * @size: size of the array
 * Return: index of 1st occurence OR NULL if it doesn't exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/*if array is NULL function must return -1*/
	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
