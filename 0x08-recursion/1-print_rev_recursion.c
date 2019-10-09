#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * Description: This function prints a string in reverse
 * followed
 * by a new line
 * @s: Pointer to the string
 * Return:
 */
void _print_rev_recursion(char *s)
{
	char *p;

	p = s;
	if (*p != '\0')
	{
		_print_rev_recursion(++p);
		_putchar(*s);
	}
}
