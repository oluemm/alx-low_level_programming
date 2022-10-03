#include "main.h"
/**
 * more_numbers - Starts here
 * prints numbers from 0 - 14 and adds a new line
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int first_num;
	int second_num;
	int res;

	i = 0;
	res = 0;
	while (i < 10)/* run the code below 10 times */
	{
		while (res <= 14)/* in as much as result is < 14 execute below code*/
		{
			if (res < 10)/*append result to second number if it's < 10 */
			{
				second_num = res;
			}
			else
			{
				first_num = res / 10;
				second_num = res % 10;
				_putchar (first_num + '0');
			}
			_putchar (second_num + '0');
			res++;
		}
		i++;
		res = 0;
		_putchar ('\n');
	}
}
