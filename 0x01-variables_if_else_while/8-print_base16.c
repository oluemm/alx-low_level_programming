#include <stdio.h>
/**
 * main - entry point
 * print our hexadecimal values i.e 0-f
 * Return: Always 0 (success)
 */
int main(void)
{
	char base_16;
	char nums;
	
	for (nums = 48; nums <= 57; nums++)
	{
		putchar(nums);
	}
	for (base_16 = 97 ; base_16 <= 102; base_16++)
	{
		putchar(base_16);
	}
	putchar ('\n');
	return (0);

}
