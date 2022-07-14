#include "main.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 * Return: Returns the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
