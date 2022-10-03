#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: separator-string to be printed between numbers
 * @n: number of numbers to be printed
 * @...: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*unsigned int j; UNCOMMENT TO USE ALTERNATE CODE*/
	va_list args; /*list used to access arguments*/
	int nums;	  /*default placeholder for integers*/

	va_start(args, n);
	/*start iterating the arguments with args for n times*/
	if (separator == NULL) /*check if the separator is NULL*/
		separator = "";	   /*assign empty string to separator*/
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int); /*assigning args to num in loop*/
		/*va_arg(va_list,data_type) i.e. data_type to extract from list*/
		printf("%d", nums);
		if (i < n - 1) /*run until i is n-1*/
		{
			printf("%s", separator);
			/*printing the entire separator string*/
			/**
			 * ALTERNATE CODE
			 * in our main.c file, our separator is ", " i.e. 2 chars
			 * in order to print the ',' and extra space we must loop
			 * thru the characters one after the other
			 * separator[0] = ','
			 * separator[1] = ' '
			 * for (j = 0; separator[j] != '\0'; j++)
			 * {
			 * printf("%c", separator[j]);
			 * }
			 */
		}
	}
	printf("\n");
	va_end(args);
}
