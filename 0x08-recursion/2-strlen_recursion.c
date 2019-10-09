#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * Description: This function returns the length of
 * a given string
 * @s: Pointer to the string
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		return (n + 1);
	}
	return (n);
}
