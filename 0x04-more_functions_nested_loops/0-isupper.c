#include "main.h"
/**
 * _isupper - program starts
 * @c: integer input
 * program checks alphabets for uppercase.
 * Return: 1 if upper and 0 is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
