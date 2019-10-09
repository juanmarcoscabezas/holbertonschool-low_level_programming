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
 * _puts_recursion - Prints a string
 * Description: This function prints a string followed
 * by a new line
 * @s: Pointer to the string
 * Return:
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - Prints a string in reverse
 * Description: This function prints a string in reverse
 * followed
 * by a new line
 * @s: Pointer to the string
 * Return:
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - Returns the length of a string
 * Description: This function returns the length of
 * a given string
 * @s: Pointer to the string
 * Return: length of @s
 */
int _strlen_recursion(char *s);

/**
 * factorial - Returns the factorial of n
 * Description: This function returns the factorial of n
 * @n: Number to find factorial
 * Return: n - 1
 */
int factorial(int n);

/**
 * _pow_recursion - Returns a pow
 * Description: This function returns the value
 * of x raised to the pow of y
 * @x: Number to find the pow
 * @y: Number that is the pow
 * Return: @x^@y
 */
int _pow_recursion(int x, int y);



#endif
