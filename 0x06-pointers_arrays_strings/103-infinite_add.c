#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer to result address
 * @size_r: size for result
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, char *size_r)
{
	int i, j, n;

	i = j = n = 0;
	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		j = 1;
	}
	while (i < size_r && (n1[i] != '\0' || n2[i] != '\0' || r[j] != '\0'))
	{
		if ((n1[i + 1] - '0') + (n2[i + 1] - '0') >= 10)
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
		r[j] = (n1[i] - '0') + (n2[i] - '0') + n;
		r[j] = r[j] % 10 + '0';
		i++;
		j++;
		if (n1[i] == '\0' || n2[i] == '\0')
		{
			r[j] = '\0';
		}
	}
	r[j] = '\0';
	return (r);
}
