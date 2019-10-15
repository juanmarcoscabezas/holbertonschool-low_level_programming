#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * Description: This function creates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Char that gonna initialize @size
 * Return: A pointer to p, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
