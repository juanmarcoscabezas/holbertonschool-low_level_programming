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
 * print_alphabet - alphabet function
 *
 * Description: This function prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - alphabet function
 *
 * Description: This function prints the alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void);


/**
 * _islower - knows if a character is in lowercase
 *
 * Description: This function return the response of character
 *
 * @c: character parameter
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - knows if a character is an alphanumeric
 *
 * Description: This function returns the response of character
 *
 * @c: character parameter
 *
 * Return: 1 if c is an alpha, 0 otherwise
 */
int _isalpha(int c);


/**
 * print_sign - Entry point
 *
 * Description: This function print the sign of a number
 *
 * @n: number to discover the sign
 *
 * Return: 1 if n is positive, 0 is zero, -1 if is less than zero
 */
int print_sign(int n);


/**
 * _abs - Entry point
 *
 * Description: This function return the absolute value of a number
 *
 * @n: number to return absolute value
 *
 * Return: the absolute value of n
 */
int _abs(int n);

#endif
