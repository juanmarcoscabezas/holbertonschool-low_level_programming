#include "holberton.h"

/**
 * _islower - Entry point
 *
 * Description: This function knows when a character is in lowercase
 *
 * @c: character to discover if is in lowercase
 *
 * Return: 1 if c is in lowecase, 0 otherwise
 */
int _islower(int c)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
			return(1);
		}
	}
	return (0);
}
