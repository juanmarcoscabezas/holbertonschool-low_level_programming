#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This function prints the alphabet x10
 * times using the function _putchar
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
