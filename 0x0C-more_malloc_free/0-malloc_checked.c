#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory pointer
 * @b: arg
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
