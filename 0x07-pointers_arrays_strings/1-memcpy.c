#include "main.h"
/**
 * _memcpy - copies values in an array into another array
 * @dest: pointer to destination where the array should be copied to
 * @src: pointer to the array going to be copied
 * @n: number of byte/values that should be copied from src to dest
 * Return: the dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;/*initialize iterator int i to 0*/
	unsigned int j = 0;/*iterator j initialized to 0*/

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
