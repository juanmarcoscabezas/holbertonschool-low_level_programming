#include "hash_tables.h"

/**
 * hash_djb2 - Algorithm djb2
 * Description: Implementation of algorithm djb2
 * @str: String to create index
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
