#include "holberton.h"

/**
 * set_bit - Sets a bit
 * Description: This function sets a bit from a number
 * @n: Number to set bit
 * @index: Index of the bit to set
 * Return: Bit at position @index, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy = 1;

	if (index > 64)
		return (-1);
	copy = copy << index;
	*n = *n | copy;
	return (1);
}
