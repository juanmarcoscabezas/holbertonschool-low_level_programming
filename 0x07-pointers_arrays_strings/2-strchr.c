#include "holberton.h"

/**
 * _strchr - Alocates a character
 * Description: This function alocates a character
 * @c in a string
 * @s: Pointer that contains the string
 * @c: Character to find in @s
 * Return: A pointer to the first occurence of @c in @s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c;)
	{
		s++;
	}
	return (s);
}
