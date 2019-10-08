#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * Description: This function prints the sums of the two
 * diagonals of a square matrix of integers
 * @a: The matrix to get values of diagonals
 * @size: The size of the matrix
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diagA = 0, diagB = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		diagA = diagA + a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		diagB = diagB + a[j];
	}
	printf("%d, %d\n", diagA, diagB);
}
