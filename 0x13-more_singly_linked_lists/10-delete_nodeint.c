#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in alist
 * Description: This function deletes a node in a list in an specific position
 * @head: List loop
 * @index: Index where gonna delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_find = *head;
	listint_t *node_to_delete;
	unsigned int counter = 0;

	if (!node_to_find)
		return (-1);

	if (index == 0)
	{
		*head = node_to_find->next;
		free(node_to_find);
		return (1);
	}
	for (counter = 0; counter < index - 1; counter++)
	{
		if (!node_to_find)
			return (-1);
		node_to_find = node_to_find->next;
	}
	if (!(node_to_find->next))
		return (-1);
	node_to_delete = node_to_find->next;
	node_to_find->next = (node_to_find->next)->next;
	free(node_to_delete);
	return (1);
}
