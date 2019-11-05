#include "lists.h"

/**
 * free_listint2 - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *tail = *head;

	if (*head)
	{
		while ((*head))
		{
			tail = (*head)->next;
			free(*head);
			*head = tail;
		}
		free((*head)->next);
		free(*head);
		*head = NULL;
	}
}
