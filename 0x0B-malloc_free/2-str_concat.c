#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void _concat(char *s, char *original, int start, int end)
{
	int i, k;

	for (i = start, k= 0; i < end; i++, k++)
	{
		*(s + i) = *(original + k);
	}
}

int string_length(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - Concatenates two strings
 * Description: This function concatenates two strings
 * the returned pointer should point to a newly allocated
 * space sin memory witch contains the contents of @s1 and @s2
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * Return: A pointer to the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int size1, size2;

	size1 = string_length(s1);
	size2 = string_length(s2);

	p = malloc(sizeof(char) * (size1 + size2));

	_concat(p, s1, 0, size1);
	_concat(p, s2, size1, size1 + size2);

	return (p);
}
