#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to check
 * @accept: values to check s againts
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1, i = 0;

	while (accept[i] != '\0')
	{
		int y = 0;

		while (s[y] != '\0')
		{
			if (accept[i] == s[y])
			{
				count++;
				break;
			}
			y++;
		}
		i++;
	}
	return (count);
}
