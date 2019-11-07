#include "holberton.h"
#include <limits.h>

/**
 * get_bit - Gets a bit
 * Description: This function a bit from a number
 * @n: Number to find bit
 * @index: Index of the bit to find
 * Return: Bit at position @index, -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binary_array[64], i = 0;

	while (n > 0)
	{
		binary_array[i] = n % 2;
		n = n / 2;
		i++;
	}
	if (index > i)
		return (-1);
	return (binary_array[index]);
}
