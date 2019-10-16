#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count words in string
 * Description: This function count how many words has a string
 * @str: Given string
 * Return: How many words has @str
 */
int count_words(char *str)
{
	int words = 0, c;

	for (c = 0; *(str + c) != '\0'; c++)
	{
		if (c > 0 && *(str + c) != ' ' && *(str + c - 1) == ' ')
			words++;
		if (c == 0 && *(str + c) != ' ')
			words++;
	}
	return (words);
}

/**
 * strtow - Splits a string into words
 * Description: This function splits a string into words
 * @str: String to split
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, m, n, words = 0, size = 0, start = -1, end = -1;
	char **p;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	p = malloc(sizeof(**p) * (words + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0; *(str + i) != '\0'; i++)
	{
		if (i == 0 && *(str + 0) != ' ')
			start = i;
		if (i > 0 && *(str + i) != ' ' && *(str + i - 1) == ' ')
			start = i;
		if (i > 0 && *(str + i) != ' ' && *(str + i + 1) == ' ')
			end = i;
		if (*(str + i + 1) == '\0')
			end = i;
		if (start != -1 && end != -1)
		{
			size = end - start + 2;
			p[j] = malloc(sizeof(*p) * size);
			if (p[j] == NULL)
			{
				free(p);
				return (NULL);
			}
			for (m = start, n = 0; m <= end; m++, n++)
				p[j][n] = *(str + m);
			p[j][n] = '\0';
			start = -1;
			end = -1;
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
