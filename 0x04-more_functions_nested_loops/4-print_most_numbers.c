#include "holberton.h"

/**
 * print_most_numbers - prints numbers
 * Description - This function prints numbers from 0 to 9, without 2 and 4
 * Return:
 */
void print_most_numbers(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		if (start != 2 && start != 4)
		{
			_putchar(start + '0');
		}
	}
	_putchar('\n');
}
