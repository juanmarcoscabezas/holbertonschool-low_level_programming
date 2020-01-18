#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * Description: This function adds an element to the hash table
 * @ht: Hash table you want to add or update the key/value
 * @key: The key, can not be an empy string
 * @value: The value, value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *head;
	hash_node_t *new_node;

	if (!ht)
		return (0);
	if (!key || strcmp(key, "") == 0 || !value)
		return (0);

	hash = key_index((const unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = (char *) key;
	new_node->value = (char *) value;
	new_node->next = NULL;

	head = ht->array[hash];

	if (!head)
	{
		ht->array[hash] = new_node;
		return (1);
	}
	while (head)
	{
		if (strcmp((char *) head->key, key) == 0)
		{
			head->value = (char *) value;
			return (1);
		}
		head = head->next;
	}
	head = ht->array[hash];
	new_node->next = head;
	head = new_node;
	return (1);
}
