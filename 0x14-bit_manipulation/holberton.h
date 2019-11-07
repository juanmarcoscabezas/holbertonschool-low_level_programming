#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

/**
 * _putchar - putchar function
 * Description: This function prints characters
 * @c: is the entry character that has to be printed
 * Return: void
 */
int _putchar(char c);

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * Description: This function converts a binary to unsigned int
 * @b: Char to converts to unsigned int
 * Return: An unsigned int
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints a number in binary
 * Description: This function prints a number in binary
 * @n: Number to print
 * Return:
 */
void print_binary(unsigned long int n);



#endif
