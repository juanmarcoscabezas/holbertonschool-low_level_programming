#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * Description: This function splits a string into words
 * @str: String to split
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, m, n, words = 0, size = 0, start = 0, end = 0;
	char **p;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i > 0 && *(str + i) != ' ' && *(str + i - 1) == ' ')
			words++;
	}
	p = malloc(sizeof(char) * (words + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0; *(str + i) != '\0' && j < words; i++)
	{
		if (i > 0 && *(str + i) != ' ' && *(str + i - 1) == ' ')
			start = i;
		if (i > 0 && *(str + i) != ' ' && *(str + i + 1) == ' ')
			end = i;
		if (start != 0 && end != 0)
		{
			size = end - start + 2;
			p[j] = malloc(sizeof(char) * size);
			if (p[j] == NULL)
			{
				free(p);
				return (NULL);
			}
			for (m = start, n = 0; m <= end; m++, n++)
				p[j][n] = *(str + m);
			p[j][n] = '\0';
			start = 0;
			end = 0;
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
