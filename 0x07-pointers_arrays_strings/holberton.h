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
 * _memset - Fills memory
 * Description: This function fills memory with a constant byte @b
 * @s: Pointer to change memory values
 * @b: Byte that gonna fill @s
 * @n: Fill the first @n bytes
 * Return: The @s filled
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies memory area
 * Description: This function copies @n bytes from memory
 * area @src to memory area @dest
 * @dest: Pointer that store new memory area values
 * @src: Pointer taht cointas memory area values
 * @n: Bytes of memory area to copy
 * Return: The @dest with @src memory area values
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Alocates a character
 * Description: This function alocates a character
 * @c in a string
 * @s: Pointer that contains the string
 * @c: Character to find in @s
 * Return: A pointer to the first occurence of @c in @s
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Alocates a character
 * Description: This function gets the length of a prefix
 * substring
 * @s: Pointer that contains the string
 * @accept: Pointer that contains the substring to find in @s
 * Return: Length of a prefix substring @accept in @s
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Search a string
 * Description: This function searches a string for any of
 * a set of bytes in @accept
 * @s: Pointer that contains the string
 * @accept: Pointer that contains the substring to find in @s
 * Return: A pointer to @s that matches one of the bytes
 * in @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring
 * Description: This function locates a substring @needle
 * in @haystack
 * @haystack: Pointer that contains the string
 * @needle: Pointer that contains the substring to find in @haystack
 * Return: A pointer to the beginning of the located substring
 * in @accept, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Prints the chessboard
 * Description: This function prints a chess board
 * @a: this pointer contains the chess
 * Return:
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Prints the sum of the two diagonals
 * Description: This function prints the sums of the two
 * diagonals of a square matrix of integers
 * @a: The matrix to get values of diagonals
 * @size: The size of the matrix
 * Return:
 */
void print_diagsums(int *a, int size);


#endif
