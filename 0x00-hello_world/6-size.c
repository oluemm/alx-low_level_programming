#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'The Program is give the size of data types'
 * Return: Always the 0 value (Success)
 * Write a C program that prints the size of various types on
 * the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * Your program should return 0
 * You might have to install the package libc6-dev-i386
 * on your Linux to test the -m32 gcc option
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}

