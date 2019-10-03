#ifndef HEADER_FILE
#define HEADER_FILE

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


#endif
