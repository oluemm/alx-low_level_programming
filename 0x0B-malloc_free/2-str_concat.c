#include "main.h"
/**
 *_len - count arrray
 *@s: array of elements
 *Return: i
 */
int _len(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	return (i);
}
/**
 *str_concat - back a pointer to array
 *@s1: Array one
 *@s2: Array two
 *Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, size;

	/*If the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*count size total*/
	size = (_len(s1) + _len(s2) + 1);

	/*malloc*/
	cat = (char *)malloc(size * sizeof(char));

	if (cat == 0)
	{
		return (NULL);
	}

	/*Concatenate arrays*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(cat + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(cat + i) = *(s2 + j);
		i++;
	}

	return (cat);
}
