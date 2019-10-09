#include "holberton.h"

/**
 * factorial - Returns the factorial of n
 * Description: This function returns the factorial of n
 * @n: Number to find factorial
 * Return: n - 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
