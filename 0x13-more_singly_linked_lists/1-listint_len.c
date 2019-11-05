#include "lists.h"

/**
 * listint_len - Number of elements in @h
 * Description: This function returns the length of a list
 * @h: List to loop
 * Return: Size of @h
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	int len = 0;

	if (!p)
		return (len);
	while (p)
	{
		p = p->next;
		len++;
	}
	return (len);
}
