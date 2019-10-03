#include "holberton.h"

/**
 * _strncat - Return concatenated string
 * Description: This function concatenate two strings from 0 to @n bytes
 * @dest: String where gonna concatenate
 * @src: String to concatenate with @dest
 * @n: Number of bytes to concatenate
 * Return: @dest + @src
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	int i = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (i < n && *src != '\0')
	{
		*(dest + counter + i) = *src++;
		i++;
	}
	return (dest);
}
