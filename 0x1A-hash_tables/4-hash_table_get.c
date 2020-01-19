#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * Description: This function retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to find
 * Return: The associated element, or NULL if key can not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	hash = key_index((const unsigned char *) key, ht->size);

	node = ht->array[hash];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
