#include "main.h"

/**
 * print_line - draws a straight line
i * @c: number of lines to be drawn
 * Return: empty
 */

void print_line(int c)
{
	int x;

	if (c <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < c; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
