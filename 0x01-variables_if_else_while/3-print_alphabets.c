#include <stdio.h>
/**
 * main : Program entry point
 *
 *Program prints out the alphabets in lower case
 *
 */

int main() {
    char c;
    char b;
    for (
        c = 'a'; 
        c <= 'z'; 
        ++c
        )
        putchar(c);
    for (
        b = 'A'; 
        b <= 'Z'; 
        ++b
        )
        
        putchar(b);
    putchar("\n");
    return 0;
}

