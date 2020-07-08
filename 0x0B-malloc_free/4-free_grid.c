#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees an array of ints
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int tall;

	if (grid == NULL)
		return;
	for (tall = height; tall >= 0; tall--)
		free(grid[tall]);
	free(grid);
}
