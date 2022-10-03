#include <stdio.h>
/**
 * main -Program entry point
 * Program prints out the alphabets in lower case
 * and then UPPER CASE
 * Return: 0 on success, 1 on error
 */

int main(void)
{
char alphabets;
char ALPHABETS;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
for (ALPHABETS = 'A'; ALPHABETS <= 'Z'; ALPHABETS++)
{
putchar(ALPHABETS);
}
putchar('\n');
return (0);
}

