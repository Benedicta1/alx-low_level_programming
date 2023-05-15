#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: the width of the integer
 * @height: the height of the integer
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ben;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ben = malloc(sizeof(int *) * height);

	if (ben == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ben[x] = malloc(sizeof(int) * width);

		if (ben[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ben[x]);
			free(ben);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ben[x][y] = 0;
	}

	return (ben);
}
