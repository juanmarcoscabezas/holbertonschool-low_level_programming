#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * Description: This function gives you the index of a key
 * @key: The key
 * @size: Size of the array of the hash table
 * Return: The index which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
