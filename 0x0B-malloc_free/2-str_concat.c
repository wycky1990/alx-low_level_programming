#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function ths get ends of input and add together for size
 * @s1: input one to concatinate
 * @s2: input two to concatinate
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	conct = malloc(sizeof(char) * (i + a + 1));
	if (conct == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		conct[i] = s2[a];
		i++, a++;
	}
	conct[i] = '\0';
	return (conct);
}
