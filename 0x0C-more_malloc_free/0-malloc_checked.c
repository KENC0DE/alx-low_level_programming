#include "main.h"

/**
 * malloc_checked - memory allocator
 * @b: Amount of memory to be allocated
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
