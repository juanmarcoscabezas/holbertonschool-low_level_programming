#include "holberton.h"

/**
 * _strpbrk - Search a string
 * Description: This function searches a string for any of
 * a set of bytes in @accept
 * @s: Pointer that contains the string
 * @accept: Pointer that contains the substring to find in @s
 * Return: A pointer to @s that matches one of the bytes
 * in @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return ('\0');
}
