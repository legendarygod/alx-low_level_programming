#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees2D grid created bt alloc_grid
 * @grid: 2d grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
