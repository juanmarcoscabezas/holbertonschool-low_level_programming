#include "holberton.h"

/**
 * _sqrt_find - Returns a number
 * Description: This function returns the sqrt
 * @n: Number to find the natural sqrt
 * @c: Counter that decreases from @n to 0
 * Return: The sqrt of @, otherwise @c-1
 */
int _sqrt_find(int n, int c)
{
	if (c == n)
		return (-1);
	if (c * c == n)
		return (c);
	return (_sqrt_find(n, c + 1));
}

/**
 * _sqrt_recursion - Returns a sqrt
 * Description: This function returns the value
 * of the nature square root of @n
 * @n: Number to find the natural sqrt
 * Return: natural sqrt of @x, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_find(n, 0));
}
