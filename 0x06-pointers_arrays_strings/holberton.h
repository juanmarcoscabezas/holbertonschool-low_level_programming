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




#endif
