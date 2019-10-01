#include "holberton.h"

/**
 * puts2 - Print pair
 * Description: This function prints every other chaaracter of a string
 * @str: Pointer that contains the string
 * Return:
 */
void puts2(char *str)
{
	int start = 0;

	while (*str != '\0')
	{
		if (start % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		start++;
	}
	_putchar('\n');
}
