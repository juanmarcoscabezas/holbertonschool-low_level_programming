#include "holberton.h"

/**
 * print_line - prints diagonal lines
 * Description - This function prints @n numbers diagomal lines, like a piramid
 * @n: number of diagonal lines
 * Return:
 */
void print_diagonal(int n)
{
	int start;
	int next_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (next_line = 0; next_line < n; next_line++)
	{
		for (start = 0; start < next_line; start++)
		{
			if (next_line != 0)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
