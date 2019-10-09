#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * Description: This function prints a string followed
 * by a new line
 * @s: Pointer to the string
 * Return:
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
