#include "main.h"
/**
 * scout - checking for the right numbers
 * @n: given value
 * @m: iterator
 * Return: 0 or 1
 */
int scout(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else
	{
		if (n % m == 0)
		{
			return (0);
		}
		else
		{
			return (scout(n, m - 1));
		}
	}
}
/**
 * is_prime_number - Checks for prime numbers
 * @n : given number to be checked
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (scout(n, n / 2));
	}
}
