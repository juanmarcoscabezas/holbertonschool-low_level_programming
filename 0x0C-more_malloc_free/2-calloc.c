#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - Fills memory
 * Description: This function fills memory with a constant byte @b
 * @s: Pointer to change memory values
 * @b: Byte that gonna fill @s
 * @n: Fill the first @n bytes
 * Return: The @s filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

/**
 * _calloc - Alocates memory of an array
 * Description: This function alocates memory
 * of an array using malloc
 * @nmemb: How many space i need to alocate
 * @size: size of elements
 * Return: A pointer to the space allocated, or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	a = _memset(a, 0, nmemb * size);
	return (a);
}
