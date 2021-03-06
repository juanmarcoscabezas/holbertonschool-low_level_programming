#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _putchar - putchar function
 * Description: This function prints characters
 * @c: is the entry character that has to be printed
 * Return: void
 */
int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints a list
 * Description: THis function prints all the elements of a list
 * @h: List to print
 * Return: Size of @h
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - Number of elements in @h
 * Description: This function returns the length of a list
 * @h: List to loop
 * Return: Size of @h
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - Adds a node to the begining
 * Description: Function that adds a new node
 * in a linked list to the begining
 * @head: Head of the list
 * @n: Number to add to the list
 * Return: A pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - Adds a node at the end
 * Description: Function that adds a new node at the end
 * in a linked list
 * @head: Head of the list
 * @n: Number to add to the node
 * Return: A pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - Pop an element from a list
 * Description: Function that pops a element from a linked list
 * @head: Head of the list
 * Return: 0 if @head is empty, head->n otherwise
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - Get an index from a list
 * Description: This function gets an elements from a list
 * @head: List loop
 * @index: Index to find and return
 * Return: An node from a list in the index @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - Sum elements from a list
 * Description: This function sums all elements from a list
 * @head: List to loop
 * Return: The sum of all @head nodes
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - Inserts a node in alist
 * Description: This function inserts a node in a list in an specific position
 * @head: List loop
 * @idx: Index where gonna insert
 * @n: Number to insert
 * Return: A new node inserted in list in the index @index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - Deletes a node in alist
 * Description: This function deletes a node in a list in an specific position
 * @head: List loop
 * @index: Index where gonna delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/**
 * reverse_listint - Resverses a list
 * Description: This function reverses a list
 * @head: List to reverse
 * Return: A pointer to the first element
 */
listint_t *reverse_listint(listint_t **head);

/**
 * print_listint - Prints a list (safe version)
 * Description: This function prints all the elements of a list
 * (safe version)
 * @head: List to print
 * Return: Size of @h
 */
size_t print_listint_safe(const listint_t *head);



#endif
