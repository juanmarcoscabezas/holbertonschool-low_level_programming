#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Creates a copy of a given string
 * Description: This function returns a pointer to a newly
 * allocated space in memory, witch contains a copy of the
 * string given as parameter
 * @str: String that we gonna copy
 * Return: A pointer to the new string, NULL if @str is NULL
 * or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + size) != '\0')
	{
		size++;
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + size) = '\0';
	return (p);
}
