#include "main.h"
/**
 * _isdigit - program begins here
 * @c: input
 * program checks for digits
 * Return: 1 if it is and 0 is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
