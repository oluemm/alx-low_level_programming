#include "main.h"

/**
 * print_alphabet - Program prints out the alphabets in lower case
 * Return: 0 on success, 1 on error
 */

void print_alphabet(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
}
