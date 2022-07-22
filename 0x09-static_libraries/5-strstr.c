#include "main.h"
/**
 * _strstr - searches for @needle in @haystack
 * @haystack: string to search through
 * @needle: string to search for
 * Return: first matching instance of @needle
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
		/*initialize for loop and increment value in haystack*/
	{
		char *hay = haystack;/*char pointer to haystack*/
		char *need = needle;/*char ptr to needle*/

		while (*hay == *need && *need != '\0')
			/**
			 * as long as the byte value of hay equals that of need
			 * and is not null byte
			 */
		{
			hay++;/*increment*/
			need++;/*increment*/
		}
		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
