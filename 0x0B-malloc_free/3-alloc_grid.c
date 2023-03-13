#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: is an integer
 * @height: is an integer
 * Return: null
 */

int **alloc_grid(int width, int height)
{
	int i, m;

	int **tee;

	if (width <= 0 || height <= 0)
		return (NULL);
	tee = malloc(sizeof(int *) * height);
	if (tee == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tee[i] = malloc(sizeof(int) * width);
		if (tee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tee[i]);
			free(tee);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (m = 0; m < width; m++)
			tee[i][m] = 0;
	}
	return (tee);
}
