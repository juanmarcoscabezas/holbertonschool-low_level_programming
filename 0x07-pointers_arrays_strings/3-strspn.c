#include "holberton.h"

/**
 * _strspn - Alocates a character
 * Description: This function gets the length of a prefix
 * substring
 * @s: Pointer that contains the string
 * @accept: Pointer that contains the substring to find in @s
 * Return: Length of a prefix substring @accept in @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int equal;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		equal = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				equal = 1;
			}
		}
		if (equal == 0)
		{
			break;
		}
	}
	return (i);
}
