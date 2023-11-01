#include <stdlib.h>
#include "main.h"

/**
 * free_grid - funtion frees a 2D created by alloc_grid
 * @grid: param - alloc_grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
