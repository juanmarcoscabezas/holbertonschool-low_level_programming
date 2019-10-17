#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _concat - concatenate strings
 * Description: This function concatenates two strings
 * @s: The string to concatenates
 * @original: The original string
 * @start: The start of the copy
 * @end: The end of copy
 * Return:
 */
void _concat(char *s, char *original, int start, int end)
{
	int i, k;

	for (i = start, k = 0; i < end; i++, k++)
	{
		*(s + i) = *(original + k);
	}
}

/**
 * string_length - Knows the length of a string
 * Descriotion: THis function knows the length of a
 * given string
 * @s: The given string
 * Return: This function return the length of @s
 */
unsigned int string_length(char *s)
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
 * string_nconcat - Concatenates two strings
 * Description: This function concatenates two strings
 * the returned pointer should point to a newly allocated
 * space sin memory witch contains the contents of @s1 and @s2
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * @n: How many characters from @s2 wanna copy
 * Return: A pointer to the new string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2;

	size1 = string_length(s1);
	size2 = string_length(s2);
	if (n >= size2)
		p = malloc(sizeof(char) * (size1 + size2) + 1);
	else
		p = malloc(sizeof(char) * (size1 + n) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	_concat(p, s1, 0, size1);
	if (n >= size2)
	{
		_concat(p, s2, size1, size1 + size2);
		*(p + size1 + size2) = '\0';
	}
	else
	{
		_concat(p, s2, size1, size1 + n);
		*(p + size1 + n) = '\0';
	}

	return (p);
}
