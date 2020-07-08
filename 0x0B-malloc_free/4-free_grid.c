#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees an array of ints
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int wide = 0, tall;

	while (grid[wide][height] != '\n')
		wide++;
	for (tall = 0; tall < height; tall++)
		free(*grid);
}
