#include "hash_tables.h"

/**
 * hash_table_print - prints
 * @ht: is the hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int cnt = 0, i = 0;

	if (ht != NULL)
	{
		printf("{");

		for (cnt = 0; cnt < ht->size; cnt++)
		{
			node = ht->array[cnt];

			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}

		printf("}\n");
	}
}

