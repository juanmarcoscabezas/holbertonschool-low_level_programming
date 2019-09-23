#include "holberton.h"
/**
 * main - Entry point
 * 
 * Description: This function prints the alphabet using the function _putchar
 * 
 * Return: Always 0
 */

void print_alphabet()
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return;
}
