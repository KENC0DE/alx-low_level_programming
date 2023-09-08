#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: size of table to be created.
 *
 * Return: the created hash.
*/
hash_table_t *hash_table_create(unsigned int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);
	ht = calloc(1, sizeof(hash_table_t) * size);
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(1, sizeof(hash_node_t));
	if (!ht->array)
		return (NULL);
	
	return (ht);
}

