#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, b;

	b = 0;

	for (a = 0; str[a] != '\0'; a++)
		b++;

	n = (b / 2);

	if ((b % 2) == 1)
		n = ((b + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
