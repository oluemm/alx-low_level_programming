#include "main.h"
/**
 * _strchr - Search array s for character c
 * @s: array to be searched
 * @c: character to search for in array
 * Return: all values after c in s, including c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		/**
		 * loop thru array a
		 * compare its individual values to @c
		 * return all values from where is in s to the end
		 */
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++;
	}
}
