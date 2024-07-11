#include "main.h"

/**
 * _is_prime_helper - checks for prime number recursively.
 * @n: number to be checked.
 * @i: divisor to test.
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int _is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if its a prime number.
 * @n: checked number.
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}
