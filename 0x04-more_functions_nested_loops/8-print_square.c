#include "holberton.h"

/**
 * print_square - prints squares
 * Description - This function prints @n numbers #, like a square
 * @n: number of #
 * Return:
 */
void print_square(int n)
{
	int start;
	int next_line;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (next_line = 0; next_line < n; next_line++)
	{
		for (start = 0; start < n; start++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
