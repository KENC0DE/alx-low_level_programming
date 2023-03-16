#include <stdlib>
#include "main.h"

/**
 * malloc_checked - memory pointer
 * @b: arg
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (b == NULL)
	{
		exit(98);
	}

	return (ptr);
}
