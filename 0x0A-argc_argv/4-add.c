#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry Point
 * Description: Program that adds positive numbers.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: Alwyas 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n",argv[i][j]);
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
