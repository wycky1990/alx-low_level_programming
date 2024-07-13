#include "main.h"
#include <stdio.h>

/**
 * _puts - function entry point
 *@str: input to be tested
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
int a = 0;
while (str[a])
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
