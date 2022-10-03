#include "main.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 * Return: Returns the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;/* i is the index of dest, j is the index of src */

	for (i = 0; dest[i] != '\0'; i++)/*run the index of i to the end of string*/
	{
	}
	for (j = 0; src[j] != '\0'; j++)/*initialize a for loop*/
	{
		dest[i] = src[j];/*append the values of src to dest*/
		i++;/*increment i*/
	}
	dest[i] = '\0';/*append the null character to the end of the string*/
	return (dest);
}
