#include "lists.h"

/**
 * print_dlistint - Function that prints a doubly linked list
 * Description: This function prints a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t number_nodes = 0;

	while (head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (number_nodes);
}
