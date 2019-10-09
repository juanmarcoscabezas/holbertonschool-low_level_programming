#include "holberton.h"

/**
 * _pow_recursion - Returns a pow
 * Description: This function returns the value
 * of x raised to the pow of y
 * @x: Number to find the pow
 * @y: Number that is the pow
 * Return: @x^@y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
