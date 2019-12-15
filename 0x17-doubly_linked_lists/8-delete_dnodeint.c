#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes a doubly linked list node
 * Description: This function deletes a doubly linked list item at the nth pos
 * @head: Head of the doubly linked list
 * @index: Index of the node to remove
 * Return: Number of nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int len = 0;

	if (!head || !*head)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;
		free(node);
		return (1);
	}
	while (node)
	{
		if (len == index)
		{
			if (node->next && node->prev)
			{
				node->prev->next = node->next;
				node->next->prev = node->prev;
			}
			else if (node->prev)
				node->prev->next = NULL;
			free(node);
			return (1);
		}
		node = node->next;
		len++;
	}
	return (-1);
}
