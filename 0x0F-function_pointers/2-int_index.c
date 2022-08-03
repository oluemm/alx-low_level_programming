#include "function_pointers.h"
/**
 * int_index - finds the index of an integer in an array
 * @array: array of integers
 * @size: size of the array
 * @cmp: function to compare two integers
 * Return: index of the integer or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/*check for null array or function*/
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	/*loop thru the array using their index values*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
