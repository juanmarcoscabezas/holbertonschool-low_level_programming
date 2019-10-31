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

	if (!new)
		return (NULL);
	new->next = (list_t *) head;
	new->str = strdup(str);
	new->len = strlen(str);
	return (&new);
}
