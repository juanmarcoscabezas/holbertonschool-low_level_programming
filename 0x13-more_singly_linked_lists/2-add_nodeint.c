#include "lists.h"

/**
 * add_nodeint - Adds a node to the begining
 * Description: Function that adds a new node
 * in a linked list to the begining
 * @head: Head of the list
 * @n: Number to add to the list
 * Return: A pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
