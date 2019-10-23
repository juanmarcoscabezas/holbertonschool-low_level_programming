#include <stdio.h>

/**
 * int_index - Searches for an integer
 * Description: This function searches for an integer
 * @array: Array to execute the given function
 * @size: Size of @array
 * @cmp: The given function to compare integers from @array
 * Return: Returns the index of the 1st element which the cmp
 * function does not return 0, if no element marches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
