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
 * reset_to_98 - Reset pointer to 98
 * Description: This function reset a pointer to the value 98
 * @n: Pointer that gonna change value
 * Return:
 */
void reset_to_98(int *n);

/**
 * swap_int - Swap the value of 2 integers
 * Description: This function swap the value of the parameters
 * @a: First pointer
 * @b: Second pointer
 * Return:
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Return the len of a string
 * Description: This function shows the length of a given string
 * @s: Pointer that contains the string
 * Return: @s len
 */
int _strlen(char *s);

#include "holberton.h"
/**
 * _puts - Prints a string
 * Description: This function prints a given string
 * @str: Pointer that contains the string
 * Return:
 */
void _puts(char *str);

/**
 * print_rev - Prints in revserse
 * Description: This function prints a given string in reverse
 * @s: Pointer that contains the string
 * Return:
 */
void print_rev(char *s);

/**
 * rev_string - Reverse a string
 * Description: This function reverse a given string
 * @s: Pointer that contains the string
 * Return:
 */
void rev_string(char *s);

/**
 * puts2 - Print pair
 * Description: This function prints every other chaaracter of a string
 * @str: Pointer that contains the string
 * Return:
 */
void puts2(char *str);

/**
 * puts_half - Print half of a string
 * Description: This function prints half of a string
 * if the len of @str is odd the function should print
 * the n last character where n = (len - 1) / 2
 * @str: Pointer that contains the string
 * Return:
 */
void puts_half(char *str);

/**
 * print_array - Print an array
 * Description: This function prints the elements of an array
 * @a: Pointer that contains the array values
 * @n: Number of items of the array
 * Return:
 */
void print_array(int *a, int n);

/**
 * _strcpy - Copy a string
 * Description: This function copies a source string into a destiny pointer
 * @dest: Pointer that receives the string
 * @src: String to copy on @dest
 * Return: *char
 */
char *_strcpy(char *dest, char *src);



#endif
