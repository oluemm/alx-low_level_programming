#include "main.h"
/**
 * _strdup - Entry point
 * @str: string to duplicate
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int count = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	dup = malloc((sizeof(char) * count) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	else if (dup == malloc(0))
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
