#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print an array
 * Description: This function prints the elements of an array
 * @a: Pointer that contains the array values
 * @n: Number of items of the array
 * Return:
 */
void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", a[start]);
		if (start < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
