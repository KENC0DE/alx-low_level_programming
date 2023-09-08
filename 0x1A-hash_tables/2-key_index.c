#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size hash table
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
