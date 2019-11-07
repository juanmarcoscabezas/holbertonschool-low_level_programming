#include "holberton.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * Description: This function converts a binary to unsigned int
 * @b: Char to converts to unsigned int
 * Return: An unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int counter = 0, pow = 0;
	const char *ptr = b;

	if (!b)
		return (0);
	while (*ptr)
	{
		if (*ptr != 48 && *ptr != 49)
			return (0);
		ptr++;
		counter++;
	}
	ptr--;
	while (counter > 0)
	{
		if (*ptr == 49)
			decimal += 1 << pow;
		pow++;
		counter--;
		ptr--;
	}
	return (decimal);
}
