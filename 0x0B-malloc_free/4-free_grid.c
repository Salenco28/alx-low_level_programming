#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This frees 2d array
 * @grid: 2d grid
 * @height: The height dimension of grid
 * Description: This frees memory of grid
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

