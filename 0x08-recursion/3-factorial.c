#include "main.h"

/**
 * factorial - Returns given number fuctorial.
 * @n: The number to look for its factorial.
 * Return: returns n. n lower than 0,returns and -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
