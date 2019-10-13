#include "holberton.h"

/**
 * _abs - Entry point
 *
 * Description: This function return the absolute value of a number
 *
 * @n: number to return absolute value
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
