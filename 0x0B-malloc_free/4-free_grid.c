#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D grid
 * @grid: the name of the grid
 * @height: grid height
 *
 * Return: Always 0;
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

