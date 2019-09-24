#include "holberton.h"

/**
 * print_times_table - Entry point
 *
 * Description: This function prints the tables from 0 to 15
 *
 * Return:
 */
void print_times_table(int n)
{
	int number;
	int mult;
	
	if (n < 15 && n >= 0)
	{
		for (number = 0; number <= n; number++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				int res = number * mult;

				if (res > 99)
				{
					_putchar((res / 100) + '0');
					res = res % 100;
				}
				if ((res > 9) && (res < 100))
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
				if (mult < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar
				}
			}
			_putchar('\n');
		}
	}
}
