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
	hash_node_t *head = NULL;
	hash_node_t *new_node = NULL;
	hash_node_t **array = NULL;

	if (!ht)
		return (0);
	if (!key || strcmp(key, "") == 0 || !value)
		return (0);

	hash = key_index((const unsigned char *) key, ht->size);

	array = ht->array;
	head = array[hash];

	while (head)
	{
		if (strcmp((char *) head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[hash];
	ht->array[hash] = new_node;
	return (1);
}
