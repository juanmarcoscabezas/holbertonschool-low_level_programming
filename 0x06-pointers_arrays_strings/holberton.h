#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * _putchar - putchar function
 *
 * Description: This function prints characters
 *
 * @c: is the entry character that has to be printed
 *
 * Return: void
 */
int _putchar(char c);

/**
 * _strcat - Return concatenated string
 * Description: This function concatenate two strings
 * @dest: String where gonna concatenate
 * @src: String to concatenate with @dest
 * Return: @dest + @src
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Return concatenated string
 * Description: This function concatenate two strings from 0 to @n bytes
 * @dest: String where gonna concatenate
 * @src: String to concatenate with @dest
 * @n: Number of bytes to concatenate
 * Return: @dest + @src
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copy a string
 * Description: This function copies a string from 0 to @n bytes
 * @dest: String where gonna copy
 * @src: String to copy into @dest
 * @n: Number of bytes to copy
 * Return: @n bytes of @src
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Compare strings
 * Description: This function compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: @n bytes of @src
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Reverse an array
 * Description: This function reverse an array of int
 * @a: Array to be reversed
 * @n: Number of elements of the array
 * Return:
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - String to upper
 * Description: This function transforms all lowercase letters to upppercase
 * @s: String to transform
 * Return: @s in uppercase
 */
char *string_toupper(char *s);

/**
 * cap_string - Capitalize a string
 * Description: This function capitalize a string. Separators of words:
 * Space, tabulation, new line, ',', ';', '.', '!', '?', '"', '(', ')'
 * '{', '}'
 * @s: String to capitalize
 * Return: @s capitalized
 */
char *cap_string(char *s);

/**
 * leet - Capitalize a string
 * Description: This function encodes a string into 1337
 * a and A replaced by 4
 * e and E replaces by 3
 * o and O replaces by 0
 * t and t replaces by 7
 * l and L replaces by 1
 * @s: String to capitalize
 * Return: @s encoded
 */
char *leet(char *s);

/**
 * rot13 - Encode string
 * Description: This function encodes a string with rot13
 * @s: String to encode
 * Return: @s encoded
 */
char *rot13(char *s);

/**
 * print_number - Print a number
 * Description: This function prints a number
 * @n: Number to print
 * Return:
 */
void print_number(int n);

#endif
