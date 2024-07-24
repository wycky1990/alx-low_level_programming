#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name through function pointer
 * @name: string to be added
 * @f: pointer to function
 * Return: not specified
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
