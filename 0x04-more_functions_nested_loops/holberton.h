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
 * _isupper - check if a character is in uppercase
 * Description - This function is to check if a charcater is in uppercase
 * @c: Integer to guess if is an uppercase character
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - check if a character is a digit
 * Description - This function is to check if a charcater is a digit
 * @c: Integer to guess if is an uppercase character
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiply two numbers
 * Description - This function is to multiply two numbers
 * @a: Integer to multiply
 * @b: Integer to multiply
 * Return: (c * b)
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers
 * Description - This function prints numbers from 0 to 9
 * Return:
 */
void print_numbers(void);

/**
 * print_most_numbers - prints numbers
 * Description - This function prints numbers from 0 to 9, without 2 and 4
 * Return:
 */
void print_most_numbers(void);

/**
 * more_numbers - prints numbers
 * Description - This function prints numbers from 0 to 14, 10 times
 * Return:
 */
void more_numbers(void);

/**
 * print_line - prints lines
 * Description - This function prints @n numbers of lines
 * @n: number of lines
 * Return:
 */
void print_line(int n);

/**
 * print_line - prints diagonal lines
 * Description - This function prints @n numbers diagomal lines, like a piramid
 * @n: number of diagonal lines
 * Return:
 */
void print_diagonal(int n);

/**
 * print_line - prints squares
 * Description - This function prints @n numbers #, like a square
 * @n: number of #
 * Return:
 */
void print_square(int n);

/**
 * print_triangle - prints #
 * Description - This function prints @n #, with the form of a triangle
 * @size: number of # and lines, size of triangle
 * Return:
 */
void print_triangle(int size);

#endif
