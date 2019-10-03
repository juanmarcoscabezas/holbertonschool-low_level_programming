#include "holberton.h"

/**
 * rot13 - Encode string
 * Description: This function encodes a string with rot13
 * @s: String to encode
 * Return: @s encoded
 */
char *rot13(char *s)
{
	char low1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c = 0;
	int low_c;

	while (*(s + c) != '\0')
	{
		low_c = 0;
		while (low1[low_c] != '\0')
		{
			if (*(s + c) == low1[low_c])
			{
				*(s + c) = low2[low_c];
				break;
			}
			low_c++;
		}
		c++;
	}
	return (s);
}
