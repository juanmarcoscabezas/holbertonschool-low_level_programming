#include "lists.h"

/**
 * print_listint - Prints a list
 * Description: This function prints all the elements of a list
 * @h: List to print
 * Return: Size of @h
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int len = 0;

	if (!p)
		return (len);
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		len++;
	}
	return (len);
}
