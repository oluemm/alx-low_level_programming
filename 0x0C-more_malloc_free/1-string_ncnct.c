#include "main.h"
/**
 * _strlen - function to Count character of string
 * @s: string to count
 * Return: number of characters in string
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
}
/**
 * string_nconcat - function to concatenate string
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of characters to concatenate from s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, j, size, p, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = _strlen(s1);
	q = _strlen(s2);
	if (n > q)
		n = q;
	size = p + n + 1;
	cat = malloc(size * sizeof(char));
	if (cat == NULL)
	{
		return (0);
	}
	for (i = 0; i < p; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}