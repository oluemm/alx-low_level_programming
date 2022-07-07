#include "main.h"
/**
 * main - Entry point
 * program checks alphabets for uppercase
 * Returns 1 if upper and 0 is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90 )
	{
		return(1);
	}
	else
		return (0);
}
