#include "lists.h"

/**
 * sum_listint - Sum elements from a list
 * Description: This function sums all elements from a list
 * @head: List to loop
 * Return: The sum of all @head nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (!head)
	{
		return (sum);
	}
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
