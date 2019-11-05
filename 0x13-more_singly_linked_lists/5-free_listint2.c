#include "lists.h"

/**
 * free_listint2 - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *tail;

	if (*head)
	{
		while ((*head)->next)
		{
			tail = (*head)->next;
			free(*head);
			*head = tail;
		}
		free(*head);
		*head = NULL;
	}
}
