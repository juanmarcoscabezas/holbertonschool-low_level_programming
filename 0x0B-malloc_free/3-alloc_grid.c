#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array
 * Description: This function returns a pointer to a 2 dimensional
 * array of integers
 * @width: The width of the 2 dimensional array
 * @height: The Heigght of the 2 dimensional array
 * Return: A pointer to the 2 dimensional array, if width or height
 * is  or negative return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1 || (width == 1 && height == 1))
	{
		return (NULL);
	}
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
