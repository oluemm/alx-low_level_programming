#include <stdio.h>
/**
 * main : Program entry point
 *
 *Program prints out the alphabets in lower case
 *
 */

int main()
{
    char c;
    for (
        c = 'a';
        c <= 'z';
        ++c
        )
        putchar(c);
    return 0;
}

