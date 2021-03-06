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

/**
 * print_last_digit - Entry point
 *
 * Description: This function prints the last digit of a number
 *
 * @n: number to get the last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n);

/**
 * jack_bauer - Entry point
 *
 * Description: This function prints the hours and minutes of the day
 *
 * Return:
 */
void jack_bauer(void);

/**
 * times_table - Entry point
 *
 * Description: This function prints the tables from 1 to 9
 *
 * Return:
 */
void times_table(void);

/**
 * add - Entry point
 *
 * Description: This function prints the tables from 1 to 9
 *
 * @a: Fist integer to add
 * @b: Secont integer to add
 *
 * Return: a + b
 */
int add(int a, int b);

/**
 * print_to_98 - Entry point
 *
 * Description: This function prints the numbers from n to 98
 *
 * @n: Start number of print
 *
 * Return:
 */
void print_to_98(int n);

/**
 * print_times_table - Entry point
 *
 * Description: This function prints the tables from 1 to 9
 *
 * Return:
 */
void print_times_table(int n);

#endif
