#include "lists.h"

/**
 * dlistint_len - Function returns the len of a doubly linked list
 * Description: This function returns the number of elements of a list
 * @h: Head of the doubly linked list
 * Return: Number of elements in @h
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t number_nodes = 0;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
	}
	while (head)
	{
		head = head->next;
		number_nodes++;
	}
	return (number_nodes);
}
