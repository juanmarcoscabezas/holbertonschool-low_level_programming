#include "holberton.h"

/**
 * print_triangle - prints #
 * Description - This function prints @n #, with the form of a triangle
 * @size: number of # and lines, size of triangle
 * Return:
 */
void print_triangle(int size)
{
	int start;
	int next_line;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (next_line = 0; next_line < size; next_line++)
	{
		for (start = 0; start < size; start++)
		{
			if(start + next_line >= size -1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
