#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * Description: This function prints a hash table, order array-list
 * @ht: The hash table to look into
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first_print = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (first_print == 1)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			first_print = 1;
		}
	}
	printf("}\n");
}
