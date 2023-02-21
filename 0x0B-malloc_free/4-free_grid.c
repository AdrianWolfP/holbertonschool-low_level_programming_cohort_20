#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a 2d grid
 * @grid: grid space
 * @height: height of grid
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}

	free(grid);
}
