#include "search_algos.h"

/**
 * linear_search - This is the linear search algorithm
 * @array: Array to loop
 * @size: Size of the array
 * @value: Value to find in the array
 * Return: The index of the value in array, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
