#include "hash_tables.h"

/**
 * hash_table_set - sets hash value in the hash table
 * @ht: the table
 * @key: the key to be set.
 * @value: value for the key.
 *
 * Return: 1 on success and 0 on failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	char *val, *ky;
	hash_node_t *nw;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	ky = strdup(key);

	nw = malloc(sizeof(hash_node_t));
	if (!nw)
		return (0);

	if (ht->array[idx] && strcmp(key, ht->array[idx]->key) == 0)
	{
		ht->array[idx]->value = val;
		return (1);
	}

	nw->key = ky;
	nw->value = val;
	nw->next = NULL;

	nw->next = ht->array[idx];
	ht->array[idx] = nw;

	return (1);
}

