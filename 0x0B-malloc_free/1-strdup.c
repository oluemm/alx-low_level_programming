#include "main.h"
/**
 * _strdup - Entry point
 * @str: string to duplicate
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * (strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
