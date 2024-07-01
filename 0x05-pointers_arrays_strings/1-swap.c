#include "main.h"

/**
 * swap_int - swaps he value of two ints
 * @a: int to swap
 * @b: int to swap
 *Return: unspecified
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
