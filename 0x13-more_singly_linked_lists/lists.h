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

#endif
