#include "main.h"

/**
 * flip_bits - function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = exclusive >> b;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
