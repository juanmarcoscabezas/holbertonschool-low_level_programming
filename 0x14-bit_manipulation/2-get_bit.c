#include "holberton.h"

/**
 * get_bit - Gets a bit
 * Description: This function a bit from a number
 * @n: Number to find bit
 * @index: Index of the bit to find
 * Return: Bit at position @index, -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary_array[65];
	unsigned int i = 0;

	while (n > 0)
	{
		binary_array[i] = n % 2;
		n = n / 2;
		i++;
	}
	if (index > 64)
		return (-1);
	if (index > i)
		return (0);
	return (binary_array[index]);
}
