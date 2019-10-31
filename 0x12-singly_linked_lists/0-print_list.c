#include "lists.h"

/**
 * print_list - Prints  a list
 * Description: Function that prints all elements of a list_t list
 * @h: List to print
 * Return: A size_t of @h
 */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);
	if (!(h->str))
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", h->len, h->str);
	return (print_list(h->next) + 1);
}
