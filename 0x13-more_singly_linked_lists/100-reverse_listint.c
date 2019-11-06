#include "lists.h"

/**
 * reverse_listint - Resverses a list
 * Description: This function reverses a list
 * @head: List to reverse
 * Return: A pointer to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!(*head))
	{
		return (NULL);
	}
	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
