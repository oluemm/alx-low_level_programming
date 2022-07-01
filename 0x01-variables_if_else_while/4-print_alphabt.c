#include <stdio.h>
/**
 * main -Program entry point
 * Program prints out the alphabets in lower case
 * ignoring letters e and q
 * Return: 0 on success, 1 on error
 */

int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
if (alphabets == 'q')
continue;

else if (alphabets == 'e')
continue;

putchar(alphabets);
}
putchar('\n');
return (0);
}

