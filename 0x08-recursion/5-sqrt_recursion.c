#include "main.h"

/**
 * _sqrt_helper - function to find square root.
 * @n: number to find square root.
 * @i: divisor being tested.
 * Return: returns square root and -1 if no square root.
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns square root of a number.
 * @n: number to find its square root.
 * Return: The natural square root, or -1 if no square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
