#include "holberton.h"

/**
 * print_numbers - prints numbers
 * Description - This function prints numbers from 0 to 9
 * Return:
 */
void print_numbers(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		_putchar(start + '0');
	}
	_putchar('\n');
}
