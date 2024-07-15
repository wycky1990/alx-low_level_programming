#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0 (success)
 */

char *argstostr(int ac, char **av)
{
	int i, n, a = 0, l = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[a] = av[i][n];
			a++;
		}
		if (str[a] == '\0')
		{
			str[a++] = '\n';
		}
	}
	return (str);
}
