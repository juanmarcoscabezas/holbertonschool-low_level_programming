#include "holberton.h"

/**
 * print_line - prints lines
 * Description - This function prints @n numbers of lines
 * @n: number of lines
 * Return:
 */
void print_line(int n)
{
	int start;

	if (n > 0)
	{
		for (start = 0; start < n; start++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
