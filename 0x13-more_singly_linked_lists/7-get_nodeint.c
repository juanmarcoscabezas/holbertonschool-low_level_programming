#include "lists.h"

/**
 * get_nodeint_at_index - Get an index from a list
 * Description: This function gets an elements from a list
 * @head: List loop
 * @index: Index to find and return
 * Return: A node from a list in the index @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_to_find = head;
	unsigned int counter = 0;

	if (!head)
	{
		return (NULL);
	}
	while (node_to_find)
	{
		if (counter == index)
			return (node_to_find);
		node_to_find = node_to_find->next;
		counter++;
	}
	return (NULL);
}
