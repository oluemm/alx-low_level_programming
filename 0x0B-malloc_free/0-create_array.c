#include "main.h"
/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character to fill the array
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
