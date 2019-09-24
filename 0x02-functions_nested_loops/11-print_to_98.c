#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: This function prints the numbers from n to 98
 *
 * @n: Start number of print
 *
 * Return: 
 */
void print_to_98(int n)
{
	
	int start;
	int n_div = 1;
	int n_copy = n;

	while(n_copy > 9)
	{
		n_copy = n_copy / 10;
		n_div = n_div * 10;
	}
	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			int start_copy = start;
			int n_div_copy = n_div;
			int n_div_aux = n_div;
			while (start_copy > 9)
			{
				start_copy = start_copy / 10;
				n_div_copy = n_div_copy / 10;
				if (start_copy <= 9)
				{
					_putchar(start_copy + '0');
					n_div_aux = n_div_aux / 10;
					n_div_copy = n_div_aux;
					start_copy = start_copy / n_div_copy;
				}
			}
			_putchar((start % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}
	else
	{
		
	}
	_putchar('\n');
}
