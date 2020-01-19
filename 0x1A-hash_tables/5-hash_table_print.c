#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * Description: This function prints a hash table, order array-list
 * @ht: The hash table to look into
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	char *space = "";

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s'%s': '%s'", space, node->key, node->value);
				node = node->next;
				space = ", ";
			}
		}
		printf("}\n");
	}
}
