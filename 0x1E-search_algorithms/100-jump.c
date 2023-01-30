#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		/*Prints a value every time it is compared in the array*/
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		/*make iterator point to prev checkd element*/
		i = jump;
		/*move jumper `step` steps*/
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/*Ensure our jumper doesn't go beyond array lenght*/
	jump = jump < size - 1 ? jump : size - 1;
	/*while i is < jump and value at index i is < search value*/
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/*if value at index i = search val, return integer type cast of i*/
	return (array[i] == value ? (int)i : -1);
}
