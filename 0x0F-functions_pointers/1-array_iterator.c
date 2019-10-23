#include <stdio.h>

/**
 * array_iterator - Executes a given function
 * Description: This function executes a function fiven as a parameter
 * @array: Array to execute the given function
 * @size: Size of @array
 * @action: The given function to execute
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
