#include "hash_tables.h"

/**
 * key_idnex - evaluates index where the key should be stored.
 * @key: the key to be stored.
 * @size: size of the array.
 *
 * Return: the index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

