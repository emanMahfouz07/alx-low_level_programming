#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a pointer to a
 * 2 deimensial array of intgers
 * @width:width of array
 * @height:height of array
 * Return:pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = calloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
		while (i > 0)
		{
			i--;
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}
	return (grid);
}
