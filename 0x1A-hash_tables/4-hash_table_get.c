#include "hash_tables.h"

/**
 *
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	hash = key_index((const unsigned char *) key, ht->size);

	node = ht->array[hash];

	if (node)
		return (node->value);
	return (NULL);
}
