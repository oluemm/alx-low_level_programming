#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: given string
 * @accept: search parameters
 * Return: similar values only
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int y = 0;

		while (accept[y] != '\0')
		{
			if (s[i] == accept[y])/*Comparison of strings*/
			{
				return (s + i);/*returning the character that is common*/
			}
			y++;
		}
		i++;
	}
	return ('\0');
}
