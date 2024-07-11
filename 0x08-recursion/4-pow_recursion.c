#include "main.h"

/**
 * _pow_recursion - Returns value x raised to power y.
 * @x: base value.
 * @y: exponent value.
 * Return: returns x raised to power y. If y is lower than 0, returns -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
