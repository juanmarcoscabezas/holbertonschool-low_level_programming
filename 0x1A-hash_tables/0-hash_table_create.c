#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * Description: This function creates a new hash table
 * @size: Size of the hash table
 * Return: new hash table, NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return NULL;
	table->size = size;
	table->array = NULL;
	return table;
}
