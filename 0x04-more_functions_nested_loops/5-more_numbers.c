#include "holberton.h"

/**
 * more_numbers - prints numbers
 * Description - This function prints numbers from 0 to 14, 10 times
 * Return:
 */
void more_numbers(void)
{
	int loop;
	int start;

	for (loop = 0; loop <= 9; loop++)
	{
		for (start = 0; start <= 14; start++)
		{
			_putchar(start / 10 + '0');
			_putchar(start % 10 + '0');
		}
		_putchar('\n');
	}
}
