#include "holberton.h"
#include <stdlib.h>

/**
 * _memcpy - Copies memory area
 * Description: This function copies @n bytes from memory
 * area @src to memory area @dest
 * @dest: Pointer that store new memory area values
 * @src: Pointer taht cointas memory area values
 * @n: Bytes of memory area to copy
 * Return: The @dest with @src memory area values
 */
void _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
}

/**
 * _realloc - Reallocates a memory block
 * Description: This function reallocates a memmory block
 * using malloc and free
 * @ptr: The pointer allocated
 * @old_size: Size in bytes of allocated space for @ptr
 * @new_size: New size in bytes for @ptr
 * Return: A pointer to the created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	if (ptr == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(a, ptr, old_size);
	else
		_memcpy(a, ptr, new_size);
	free(ptr);
	return (a);
}
