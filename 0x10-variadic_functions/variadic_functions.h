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
 * sum_them_all - Summ all its parameters
 * Description: This is a variadic function that sum all its
 * parameters
 * @n: Number of parameters
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers
 * Description: This is a variadic function prints numbers
 * @separator: Separator space between numbers
 * @n: Number of parameters
 * Return: The sum of all its parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings
 * Description: This is a variadic function prints strings
 * @separator: Separator space between numbers
 * @n: Number of parameters
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints all
 * Description: This is a variadic function prints all
 * @format: Format of data
 * Return:
 */
void print_all(const char * const format, ...);

#endif
