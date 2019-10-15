#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array
 * Description: Frees memory of an array
 * @grid: Array that gonna be frees
 * @height: The Height of the 2 dimensional array
 * Return:
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
