#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the nth index of linked list
 * Description: This function returns the nth element of a doubly linked list
 * @head: Head of the doubly linked list
 * @index: Index of the element to find
 * Return: Number of elements in @h
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h_cpy = head;
	unsigned int len = 0;

	if (h_cpy)
	{
		while (h_cpy->prev)
		{
			h_cpy = h_cpy->prev;
		}
	}
	while (h_cpy)
	{
		if (index == len)
		{
			return (h_cpy);
		}
		h_cpy = h_cpy->next;
		len++;
	}
	return (NULL);
}
