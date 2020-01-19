#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * Description: Thius function deletes a hash table
 * @ht: Hash table to delete
 * Return:
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *aux;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while(node)
		{
			aux = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = aux;
		}
		if (node)
			free(node);
	}
	free(ht->array);
	free(ht);
}
