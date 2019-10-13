#include "holberton.h"

/**
 * _strcat - Return concatenated string
 * Description: This function concatenate two strings
 * @dest: String where gonna concatenate
 * @src: String to concatenate with @dest
 * Return: @dest + @src
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (*src != '\0')
	{
		*(dest + counter) = *src++;
		counter++;
	}
	return (dest);
}
