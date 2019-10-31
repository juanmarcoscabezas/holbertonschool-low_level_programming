#include "lists.h"

/**
 * list_len - Number of elements
 * Description: Function that returns the number of elements
 * in a linked list
 * @h: List to print
 * Return: A size_t of @h
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	return (list_len(h->next) + 1);
}
