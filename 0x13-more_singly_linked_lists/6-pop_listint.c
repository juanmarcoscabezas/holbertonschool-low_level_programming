#include "lists.h"

/**
 * pop_listint - Pop an element from a list
 * Description: Function that pops a element from a linked list
 * @head: Head of the list
 * Return: 0 if @head is empty, head->n otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *node_pop = *head;
	int n;

	if (*head)
	{
		n = node_pop->n;
		free(*head);
		*head = node_pop->next;
		return (n);
	}
	return (0);
}
