#include "lists.h"

/**
 * print_list - Prints  a list
 * Description: Function that prints all elements of a list_t list
 * @h: List to print
 * Return: A size_t of @h
 */
size_t print_list(const list_t *h)
{
	if (!h || !(h->next))
		return (0);
	if (!(h->str))
		printf("[%d] (nil)\n", h->len);
	else
		printf("[%d] %s\n", h->len, h->str);
	return (print_list(h->next) + 1);
}
