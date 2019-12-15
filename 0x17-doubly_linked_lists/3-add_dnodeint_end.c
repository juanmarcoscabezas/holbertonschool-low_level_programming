#include "lists.h"

/**
 * add_dnodeint_end - Function adds a new node to a doubly linked list
 * Description: This function adds a node at the end of a linked list
 * @head: Head of the doubly linked list
 * @n: Number to add
 * Return: Number of elements in @h
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (tail)
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->prev = tail;
		return (new_node);
	}
	*head = new_node;
	return (new_node);
}
