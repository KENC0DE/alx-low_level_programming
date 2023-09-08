#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: size of table to be created.
 *
 * Return: the created hash.
*/
hash_table_t *hash_table_create(unsigned int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t) * size);

	if (!ht || size == 0)
		return (NULL);

	return (ht);
}

