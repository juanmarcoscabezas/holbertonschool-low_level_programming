#include "holberton.h"

/**
 * _strcmp - String to upper
 * Description: This function transforms all lowercase letters to upppercase
 * @s: String to transform
 * Return:
 */
char *string_toupper(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		if (*(s + counter) >= 97 && *(s + counter) <= 122)
			*(s + counter) = *(s + counter) - 32;
		counter++;
	}
	return (s);
}
