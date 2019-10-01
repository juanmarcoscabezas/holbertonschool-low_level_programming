#include "holberton.h"
/**
 * print_rev - Prints in revserse
 * Description: This function prints a given string in reverse
 * @s: Pointer that contains the string
 * Return:
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
