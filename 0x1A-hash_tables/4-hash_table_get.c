#include "hash_tables.h"

/**
 * hash_table_get - .....
 * @ht: is the hash table
 * @key: the key we are looking for
 * Return: value associated with the element
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nnd;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_idx((const unsigned char *)key, ht->size);
	nnd = ht->array[idx];

	for (; nnd != NULL; nnd = nnd->next)
	{
		if (strcmp(nnd->key, key) == 0)
			return (nnd->value);
	}

	return (NULL);
}

