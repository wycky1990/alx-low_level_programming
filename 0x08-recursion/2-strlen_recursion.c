#include "main.h"

/**
 * _strlen_recursion - Returns string length.
 * @s: string to measure.
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
