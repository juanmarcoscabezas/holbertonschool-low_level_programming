#include "holberton.h"
int palindrome_length(char *s, int l);
int verify_palindrome(char *s, int c, int l);

/**
 * palindrome_length - Know length
 * Description: This function knows the length
 * of a string
 * @s: String given
 * @l: Length of the string
 * Return: @l
 */
int palindrome_length(char *s, int l)
{
	char *p;

	p = s;
	if (*p != '\0')
	{
		l++;
		return (palindrome_length(++p, l));
	}
	else
		return (l);
}

/**
 * verify_palindrome - Verify the number given
 * Description: This function knows if a string
 * is palindrome or not
 * @s: String given
 * @c: Counter to go to the next char
 * @l: Length of the string
 * Return: 1 if @n is prime, 0 otherwise
 */
int verify_palindrome(char *s, int c, int l)
{
	if (c >= l)
		return (1);
	if (c < l && *(s + c) != *(s + l))
		return (0);
	return (verify_palindrome(s, c + 1, l - 1));
}

/**
 * is_palindrome - Knows if a string is palindrome
 * Description: This function knows if a given
 * string is palindrome or not
 * @s: String to knwo if it´s palindrome
 * Return: 1 if @n is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (verify_palindrome(s, 0, palindrome_length(s, 0) - 1));
}
