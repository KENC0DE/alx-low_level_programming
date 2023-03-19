#include <stdlib.h>
#include "main.h"

/**
 * _calloc - funcs calloc
 * @nmemb: members
 * @size: size members
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
