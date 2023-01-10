#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created with alloc_grid function
 * @grid: grid array
 * @height: height of array
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
