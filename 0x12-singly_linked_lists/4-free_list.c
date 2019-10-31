#include "lists.h"

/**
 * free_list - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_list(list_t *head)
{
	list_t *tail = head;
	list_t *delete;

	if (head)
	{
		while (tail->next != NULL)
		{
			free(tail->str);
			delete = tail;
			tail = tail->next;
			free(delete);
			delete++;
		}
		free(tail->str);
		free(tail);
	}
}
