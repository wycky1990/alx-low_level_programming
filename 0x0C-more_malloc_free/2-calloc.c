#include <stdlib.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory to fill
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(size * nmemb);

	if (b == NULL)
		return (NULL);

	_memset(b, 0, nmemb * size);

	return (b);
}
