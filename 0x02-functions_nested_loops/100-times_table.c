#include "holberton.h"

/**
 * print_times_table - Entry point
 * Description: This function prints the tables from 0 to 15
 * @n: the number that i wanna show
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

				if (mult > 0)
					_putchar(',');
				if (mult > 0 && res < 1000)
					_putchar(' ');
				if (mult > 0 && res < 100)
					_putchar(' ');
				if (mult > 0 && res < 10)
					_putchar(' ');
				if (res > 99)
				{
					_putchar((res / 100) + '0');
					res = res % 100;
					if (res < 10)
						_putchar('0');
				}
				if ((res > 9) && (res < 100))
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
