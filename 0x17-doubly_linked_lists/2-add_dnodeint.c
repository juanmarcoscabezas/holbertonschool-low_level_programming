#include "lists.h"

/**
 * add_dnodeint - Function adds a new node to a doubly linked list
 * Description: This function adds a node at the start of a linked list
 * @head: Head of the doubly linked list
 * @n: Number to add
 * Return: Number of elements in @h
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		while ((*head)->prev)
		{
			(*head) = (*head)->prev;
		}
		(*head)->prev = new_node;
		new_node->next = (*head);
		(*head) = new_node;
		return (*head);
	}
	*head = new_node;
	return (*head);
}
