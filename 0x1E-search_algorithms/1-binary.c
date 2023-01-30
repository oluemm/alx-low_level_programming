#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: value index or -1 if not present or the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high;

	if (array == NULL)
		return (-1);
	/*low is assigned to the first index of array*/
	/*high is assigned to the last index of array*/
	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		/* prints the [sub]array being searched after each change.*/
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		/*print the last element and add a newline*/
		printf("%d\n", array[mid]);

		/*defining araay's mid point*/
		mid = low + (high - low) / 2;
		/*if the value = elment at mid return it's index*/
		if (array[mid] == value)
			return (mid);
		/*if the elment > value at mid */
		if (array[mid] > value)
			/*search lower half of the array*/
			/*by making the new high one index below mid*/
			high = mid - 1;
		else
			/*search upper half of the array*/
			/*by making the new low one index above mid*/
			low = mid + 1;
	}

	return (-1);
}
