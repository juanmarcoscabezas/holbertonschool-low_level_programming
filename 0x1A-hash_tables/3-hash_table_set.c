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
	hash_node_t *node;

	if (!ht)
		return (0);
	if (!key || strcmp(key, "") == 0 || !value)
		return (0);

	hash = key_index((const unsigned char *) key, ht->size);

	node = ht->array[hash];

	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;
	
	return (1);
}
