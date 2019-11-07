#include "holberton.h"
#include <limits.h>

/**
 * print_binary - Prints a number in binary
 * Description: This function prints a number in binary
 * @n: Number to print
 * Return:
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int print_zero = 0, counter = 63;

	while (counter > 0)
	{
		mask = mask << 1;
		counter--;
	}
	if (n == 0)
	{
		printf("0");
		return;
	}
	while (mask > 0)
	{
		if (((n & mask) == 0) && (print_zero == 1))
		{
			printf("0");
		}
		if ((n & mask) != 0)
		{
			printf("1");
			print_zero = 1;
		}
		mask = mask >> 1;
	}
}
