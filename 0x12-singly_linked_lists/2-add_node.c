#include "lists.h"

/**
 * _strlen - Return the len of a string
 * Description: This function shows the length of a given string
 * @s: Pointer that contains the string
 * Return: @s len
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

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

	if (!new || !str)
	{
		free(new);
		return (NULL);
	}
	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
