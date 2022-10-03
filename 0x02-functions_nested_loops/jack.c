#include <stdio.h>

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int a;
	int b;
	a = 0; 
	while (a <= 23)
	{
		b = 0; 
		while(b <= 59)
		{
			putchar (a / 10 + '0');
			putchar (a % 10 + '0');
			putchar (':');
			putchar (b / 10 + '0');
			putchar (b % 10 + '0');
			putchar ('\n');
			b++;
		}
		a++;
	}

}
