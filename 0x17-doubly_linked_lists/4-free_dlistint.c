#include "lists.h"

/**
 * free_dlistint - Function that frees a doubly linked list
 * Description: This function frees a doubly linked list
 * @head: Head of the doubly linked list
 * Return:
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
