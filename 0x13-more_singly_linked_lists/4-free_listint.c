#include "lists.h"

/**
 * free_listint - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *tail = head;
	listint_t *delete;

	if (head)
	{
		while (tail->next != NULL)
		{
			delete = tail;
			tail = tail->next;
			free(delete);
			delete++;
		}
		free(tail);
	}
}
