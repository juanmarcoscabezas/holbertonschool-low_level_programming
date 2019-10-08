#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * Description: This function locates a substring @needle
 * in @haystack
 * @haystack: Pointer that contains the string
 * @needle: Pointer that contains the substring to find in @haystack
 * Return: A pointer to the beginning of the located substring
 * in @accept, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int start;
	int match = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		start = i;
		while (*(needle + j) != '\0')
		{
			if (*(needle + j) == *(haystack + start))
			{
				match = 1;
			}
			else
			{
				match = 0;
				break;
			}
			j++;
			start++;
		}
		if (match == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
