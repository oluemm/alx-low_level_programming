## C - More functions, more nested loops

| Content | Summary |
| ------ | ------ |
|[0-main.c](0-main.c) |checks 0-isupper |
|[0-isupper.c](0-isupper.c)|Function that checks for uppercase character.|
|[1-isdigit.c](1-isdigit.c)|function that checks for a digit (i.e. 0 through 9).|
|[2-mul.c](2-mul.c)|function that multiplies two integers|
|[2-main.c](2-main.c)|checks 2-mul.c|



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

##### 1. isdigit<br>
Write a function that checks for a digit (0 through 9).<br>
Prototype: int _isdigit(int c);<br>
Returns 1 if c is a digit<br>
Returns 0 otherwise<br>
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
```

#### Repo:<br>
GitHub repository: alx-low_level_programming<br>
Directory: 0x04-more_functions_nested_loops<br>
File: [1-isdigit.c](1-isdigit.c)

##### 2. Collaboration is multiplication<br>
Write a function that multiplies two integers.<br>
Prototype: int mul(int a, int b);<br>
```
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
```
#### Repo:<br>
GitHub repository: alx-low_level_programming<br>
Directory: 0x04-more_functions_nested_loops<br>
File: [2-mul.c](2-mul.c)
