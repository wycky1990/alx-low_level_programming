#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (; a >= 0; a--)
				free(s[a]);
			free(s);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			s[a][y] = 0;
	}
	return (s);
}
