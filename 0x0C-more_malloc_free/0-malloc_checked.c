#include <stdlib>
#include "main.h"

/**
 * malloc_checked - memory pointer
 * @b: arg
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	if (b == 0)
	{
		exit(98);
	}

	void *ptr = malloc(b);

	return (ptr);
}
