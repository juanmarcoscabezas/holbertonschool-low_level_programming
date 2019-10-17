#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Alocates memory
 * Description: This function alocates memory using malloc
 * @b: How many space i need to alocate
 * Return: A pointer to the space allocated
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
