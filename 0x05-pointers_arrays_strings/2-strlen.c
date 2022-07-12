#include "main.h"
/**
 * _strlen -  function returns the length of a string
 * @s: pointer to the input address
 * Return: length of strings given
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
