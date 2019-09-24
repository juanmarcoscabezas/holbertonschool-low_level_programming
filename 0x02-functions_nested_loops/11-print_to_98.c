#include "holberton.h"

/**
 * print_to_98 - Entry point
 * Description: This function prints the numbers from n to 98
 * @n: Start number of print
 * Return:
 */
void print_to_98(int n)
{
	int start = n;
	int number;
	int aux;

	while (start != 98)
	{
		aux = start;
		if (start < 0)
			_putchar('-');
		for (number = 100000; number >= 10; number /= 10)
		{
			if (aux / number > 0 || number < start)
			{
				_putchar((aux / number) + '0');
				aux = aux % number;
			}
			if (aux / number < 0)
				_putchar(((start / number) * -1) + '0');
		}
		if (start >= 0)
			_putchar((start % 10) + '0');
		else
			_putchar(((start % 10) * -1) + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			start--;
		else
			start++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
