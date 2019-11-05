#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node in alist
 * Description: This function inserts a node in a list in an specific position
 * @head: List loop
 * @idx: Index where gonna insert
 * @n: Number to insert
 * Return: A new node inserted in list in the index @index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_to_find = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int counter = 0;

	new_node->n = n;
	new_node->next = NULL;

	if (!head)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (node_to_find)
	{
		if (counter == idx - 1)
		{
			new_node->next = node_to_find->next;
			node_to_find->next = new_node;
			return (new_node);
		}
		node_to_find = node_to_find->next;
		counter++;
	}
	free(new_node);
	return (NULL);
}
