#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to check
 * @accept: values to check s againts
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0;

	while (s[i] != '\0')
	{
		int y = 0;

		while (accept[y] != '\0')
		{
			if (accept[y] == s[i])
			{
				count++;
				break;
			}
			y++;
		}
		if (s[i] != accept[y])
		{
			break;
		}
		i++;
	}
	return (count);
}
