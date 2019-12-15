#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


/**
 * print_dlistint - Function that prints a doubly linked list
 * Description: This function prints a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

#endif
