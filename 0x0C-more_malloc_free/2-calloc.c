#include "holberton.h"
#include <stdlib.h>

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
	void *a = malloc(nmemb * size);

	if (nmemb < 1 || size < 1)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
