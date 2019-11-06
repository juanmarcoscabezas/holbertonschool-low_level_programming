#include "lists.h"

/**
 * print_listint - Prints a list (safe version)
 * Description: This function prints all the elements of a list
 * (safe version)
 * @head: List to print
 * Return: Size of @h
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	int len = 0;

	if (!node)
	{
		return (len);
	}
	while (node)
	{
		printf("[%p] %d\n", node, node->n);
		node = node->next;
		len++;
	}
	return (len);
}
