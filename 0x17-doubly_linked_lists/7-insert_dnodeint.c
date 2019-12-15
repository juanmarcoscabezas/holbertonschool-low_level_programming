#include "lists.h"

/**
 * insert_dnodeint_at_index - Function adds a new node to a doubly linked list
 * Description: This function adds a node at the index @idx of a linked list
 * @h: Head of the doubly linked list
 * @idx: Index wto insert @n
 * @n: Number to add
 * Return: Number of elements in @h
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *actual_node;
	unsigned int len = 0;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	actual_node = *h;
	while (actual_node)
	{
		if (len == idx)
		{
			(actual_node->prev)->next = new_node;
			new_node->prev = actual_node->prev;
			new_node->next = actual_node;
			actual_node->prev = new_node;
			return (new_node);
		}
		if (actual_node->next == NULL && len + 1 == idx)
		{
			actual_node->next = new_node;
			new_node->prev = actual_node;
			return (new_node);
		}
		actual_node = actual_node->next;
		len++;
	}
	free(new_node);
	return (NULL);
}
