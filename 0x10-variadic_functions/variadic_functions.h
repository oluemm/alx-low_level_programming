#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * argType - specifies a structure whc has
 * @valid: as a char parameter
 * @f: a pointer to a function that will be called
 */
typedef struct argType
{
	char *valid;
	void (*f)();
} types;
#endif /*VARIADIC_FUNCTIONS*/
