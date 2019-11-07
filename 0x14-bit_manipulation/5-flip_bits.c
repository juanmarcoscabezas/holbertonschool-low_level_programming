#include "holberton.h"

/**
 * flip_bits - Flips a bit
 * Description: This function flips a bit from a number
 * @n: Number to flip
 * @m: Number to flip
 * Return: How many different bites has @m and @n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int copy = 1;
	int counter = 0;
	unsigned int times = 0;

	while (counter < 64)
	{
		if ((copy & n) != (copy & m))
			times++;
		counter++;
		copy = copy << 1;
	}
	return (times);
}
