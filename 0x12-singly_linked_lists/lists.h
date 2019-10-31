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
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints  a list
 * Description: Function that prints all elements of a list_t list
 * @h: List to print
 * Return: A size_t of @h
 */
size_t print_list(const list_t *h);

/**
 * list_len - Number of elements
 * Description: Function that returns the number of elements
 * in a linked list
 * @h: List to print
 * Return: A size_t of @h
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a node
 * Description: Function that adds a new node
 * in a linked list
 * @head: Head of the list
 * @str: Name to add to the node
 * Return: A size_t of @h
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a node at the end
 * Description: Function that adds a new node at the end
 * in a linked list
 * @head: Head of the list
 * @str: Name to add to the node
 * Return: A size_t of @h
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list
 * Description: Function that frees a linked list
 * @head: Head of the list
 * Return:
 */
void free_list(list_t *head);

#endif
