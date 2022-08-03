#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: function to execute on each element of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	/*check for null array or function*/
	if (array == NULL || action == NULL)
	{
		return;
	}
	/*loop thru the array using their index values*/
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
