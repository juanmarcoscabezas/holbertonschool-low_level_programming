#include "holberton.h"

/**
 * _strcpy - Copy a string
 * Description: This function copies a source string into a destiny pointer
 * @dest: Pointer that receives the string
 * @src: String to copy on @dest
 * Return: *char
 */
char *_strcpy(char *dest, char *src)
{
	int start = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		start++;
	}
	while (start > 0)
	{
		dest--;
		src--;
		start--;
	}
	return (dest);
}
