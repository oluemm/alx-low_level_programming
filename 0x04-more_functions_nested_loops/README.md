## C - More functions, more nested loops

| Content | Summary |
| ------ | ------ |
|[0-main.c](0-main.c) |checks 0-isupper |
|[0-isupper.c](0-isupper.c)|Function that checks for uppercase character.|

##### 0. isupper<br>
Write a function that checks for uppercase character.

Prototype: int _isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
  * main - check the code.
  *
  * Return: Always 0.
  */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$
```
#### Repo:<br>
GitHub repository: alx-low_level_programming<br>
Directory: 0x04-more_functions_nested_loops<br>
File: [0-isupper.c](0-isupper.c)
