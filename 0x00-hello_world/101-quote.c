#include <stdio.h>
#include <wchar.h>
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: return 1 after execution ==> Standard Error
 */
int main(void)
{
	wchar_t sr[] = L"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	wprintf(L"%ls\n", sr);
	return (1);
}
