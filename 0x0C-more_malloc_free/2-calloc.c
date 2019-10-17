#include "holberton.h"
#include <stdlib.h>
#include <string.h>
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
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	memset(a, 0, nmemb * size);
	return (a);
}
