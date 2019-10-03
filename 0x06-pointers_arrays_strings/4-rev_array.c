#include "holberton.h"

/**
 * reverse_array - Reverse an array
 * Description: This function reverse an array of int
 * @a: Array to be reversed
 * @n: Number of elements of the array
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	n = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - i));
		*(a + (n - i)) = tmp;
	}
}
