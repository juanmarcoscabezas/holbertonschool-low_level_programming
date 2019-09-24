#include "holberton.h"

/**
 * _isalpha - Entry point
 *
 * Description: This function knows when a character is an alphanumeric
 *
 * @c: character to discover if is an alphanumeric
 *
 * Return: 1 if c is an alpha, 0 otherwise
 */
int _isalpha(int c)
{
	int letter;
	int digit;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
			return (1);
		}
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
		{
			return (1);
		}
	}
	for (digit = '1'; digit <= '9'; digit++)
	{
		if (digit == c)
		{
			return (1);
		}
	}
	return (0);
}
