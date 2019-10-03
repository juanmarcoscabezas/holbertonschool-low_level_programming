#include "holberton.h"

/**
 * print_number - Print a number
 * Description: This function prints a number
 * @n: Number to print
 * Return:
 */
void print_number(int n)
{
	int n_copy = n;
	int divisor = 1;

	if (n < 0)
	{
		divisor = -divisor;
			_putchar('-');
		while (n_copy < -9)
		{
			n_copy = n_copy / 10;
			divisor = divisor * 10;
		}
		while (divisor < -1)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor = divisor / 10;
		}
		_putchar((n % 10) * -1 + '0');
	}
	if (n >= 0)
	{
		while (n_copy > 9)
		{
			n_copy = n_copy / 10;
			divisor = divisor * 10;
		}
		while (divisor > 1)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor = divisor / 10;
		}
		_putchar(n % 10 + '0');
	}
}
