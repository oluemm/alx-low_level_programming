#include "variadic_functions.h"

/**
 * p_char - prints characters
 * @c: character to print
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_int - prints integers
 * @i: integer to print
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_float - prints floats
 * @f: float to print
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * p_string - prints strings
 * @s: string to print
 */
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL) /*check if string is null*/
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all - prints any argument passed into it
 * @format: formats symbols in order
 */
void print_all(const char *const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list argp;
	types valid_types[] = {
		{"%c", p_char}, {"%i", p_int}, {"%f", p_float}, {"%s", p_string}};

	i = j = 0;
	separator = "";
	va_start(argp, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			/**
			 * check if the char in format is part of our defined types
			 * E.g. print_all("ceis", 'B', 3, "stSchool");
			 * format[0] = 'c' * format[2] = 'i'; . . .
			 */
			{
				printf("%s", separator); /*This line is used to skip NULL formats*/
				valid_types[j].f(argp);
				/**
				 * Consider the following print_all("ceis", 'B', 3, "stSchool");
				 * format[0] is 'c',
				 * valid_types[0].f(argp) means check the key 'c' in valid_types dict
				 * and return its value which would be p_char.
				 * then use that value which incidentally is a function name to call
				 * the function passing agrp(the arguments passed to the function)
				 */
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
