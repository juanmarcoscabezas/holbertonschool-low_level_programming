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
	int i;

	for (i = 0; *(s + i) != '\0' && *(s + i) != c; i++);
	if (*(s + i) != c)
		return (0);
	else
		return (s + i);
}
