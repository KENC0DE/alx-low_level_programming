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
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

