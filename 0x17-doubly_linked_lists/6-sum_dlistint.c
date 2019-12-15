#include "lists.h"

/**
 * sum_dlistint - Function that sums a doubly linked list
 * Description: This function sums a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
int sum_dlistint(dlistint_t *h)
{
	dlistint_t *head = h;
	int sum = 0;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
