#include "lists.h"

/**
 * add_node - Adds a node
 * Description: Function that adds a new node
 * in a linked list
 * @head: Head of the list
 * @str: Name to add to the node
 * Return: A size_t of @h
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *s;

	if (!new)
		return (NULL);
	s = strdup(str);
	if (!s)
		return (NULL);
	new->str = s;
	new->len = strlen(str);
	if (!head)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	
	}
	return (*head);
}
