#include "main.h"
/**
 * _strdup - Entry point
 * @str: string to duplicate
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup;
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	dup = malloc((count * sizeof(char)) + 1);
	i = 0;
	while (i < count)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
