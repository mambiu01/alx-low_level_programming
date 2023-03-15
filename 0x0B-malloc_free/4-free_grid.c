#include "main.h"

/**
 * free_grid - 2 dimensional grid previously
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;
	for  (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
