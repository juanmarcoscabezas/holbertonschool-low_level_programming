#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _putchar - putchar function
 * Description: This function prints characters
 * @c: is the entry character that has to be printed
 * Return: void
 */
int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/**
 * print_listint - Prints a list
 * Description: THis function prints all the elements of a list
 * @h: List to print
 * Return: Size of @h
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - Number of elements in @h
 * Description: This function returns the length of a list
 * @h: List to loop
 * Return: Size of @h
 */
size_t listint_len(const listint_t *h);





#endif
