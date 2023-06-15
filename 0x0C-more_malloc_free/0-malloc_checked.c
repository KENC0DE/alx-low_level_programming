#include "main.h"

/**
 * malloc_checked - memory allocator
 * @b: Amount of memory to be allocated
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	else
		return (malloc(b));
}
