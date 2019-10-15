#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program
 * Description: This function concatenates the arguments
 * of a program
 * @ac: Arguments count
 * @av: The value of arguments
 * Return: A pointer to a string that contains the
 * concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(p + k) = av[i][j];
			k++;
		}
		*(p + k) = '\n';
		k++;
	}
	*(p + k) = '\0';
	return (p);
}
