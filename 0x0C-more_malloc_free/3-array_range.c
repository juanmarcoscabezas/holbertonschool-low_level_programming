#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of int
 * Description: This function creates an array of integer
 * @min: Min valued of array
 * @max: Max value of array
 * Return: A pointer to the created array
 */
int *array_range(int min, int max)
{
	int *a;
	int how_many = 0, i;

	if (min > max)
	{
		return (NULL);
	}
	how_many = max - min + 1;
	a = malloc(sizeof(int) * how_many);

	for (i = 0; i < how_many; i++)
	{
		*(a + i) = min + i;
	}
	return (a);
}
