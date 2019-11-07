#include "holberton.h"

/**
 * clear_bit - Clears a bit
 * Description: This function clears a bit from a number
 * @n: Number to clear bit
 * @index: Index of the bit to clear
 * Return: Bit at position @index, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy = 1;

	if (index > 64)
		return (-1);
	copy = copy << index;
	*n = *n & ~copy;
	return (1);
}
