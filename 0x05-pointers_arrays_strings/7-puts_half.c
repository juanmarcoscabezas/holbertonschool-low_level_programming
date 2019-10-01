#include "holberton.h"

/**
 * puts_half - Print half of a string
 * Description: This function prints half of a string
 * if the len of @str is odd the function should print
 * the n last character where n = (len - 1) / 2
 * @str: Pointer that contains the string
 * Return:
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
