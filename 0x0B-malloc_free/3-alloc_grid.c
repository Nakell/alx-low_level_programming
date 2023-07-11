#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of an array
 * @height: height of an array
 * Return: null on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y, z, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (x = 0; x < height; x--)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (y = x; y >= 0; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (a = 0; a < width; a++)
		{
			grid[z][a] = 0;
		}
	}
	return (grid);
}
