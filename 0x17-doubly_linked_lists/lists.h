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

/**
 * dlistint_len - Function returns the len of a doubly linked list
 * Description: This function returns the number of elements of a list
 * @h: Head of the doubly linked list
 * Return: Number of elements in @h
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - Function adds a new node to a doubly linked list
 * Description: This function adds a node at the start of a linked list
 * @head: Head of the doubly linked list
 * @n: Number to add
 * Return: Number of elements in @h
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Function adds a new node to a doubly linked list
 * Description: This function adds a node at the end of a linked list
 * @head: Head of the doubly linked list
 * @n: Number to add
 * Return: Number of elements in @h
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - Function that frees a doubly linked list
 * Description: This function frees a doubly linked list
 * @head: Head of the doubly linked list
 * Return:
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Function returns the nth index of linked list
 * Description: This function returns the nth element of a doubly linked list
 * @head: Head of the doubly linked list
 * @index: Index of the element to find
 * Return: Number of elements in @h
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Function that sums a doubly linked list
 * Description: This function sums a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
int sum_dlistint(dlistint_t *h);


#endif
