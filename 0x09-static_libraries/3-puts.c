#include "holberton.h"
/**
 * _puts - Prints a string
 * Description: This function prints a given string
 * @str: Pointer that contains the string
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
