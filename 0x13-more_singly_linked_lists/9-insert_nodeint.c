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

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = node_to_find;
		*head = new_node;
		return (new_node);
	}
	for (counter = 0; counter < idx - 1; counter++)
	{
		if (!node_to_find)
		{
			free(new_node);
			return (NULL);
		}
		node_to_find = node_to_find->next;
	}
	new_node->next = node_to_find->next;
	node_to_find->next = new_node;
	return (new_node);
}
