#include <stdio.h>
/**
 * main -Program entry point
 * Program prints out the alphabets in lower case
 * Return: 0 on success, 1 on error
 */

int main(void)
{
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}

putchar('\n');
return (0);
}

