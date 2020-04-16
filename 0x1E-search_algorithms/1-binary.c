#include "search_algos.h"

/**
 * binary_search - This is the binary search algorithm
 * @array: Array to loop
 * @size: Size of the array
 * @value: Value to find in the array
 * Return: The index of the value in array, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right, middle, i;

	if (!array)
		return (-1);
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%d", array[i]);
		}
		putchar('\n');

		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
