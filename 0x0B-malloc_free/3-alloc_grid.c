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
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}

	return (grid);
}
