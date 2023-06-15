#include "main.h"

/**
 * seT0 - set the memory to zero.
 * @ptr: pointer to memory space
 * @o: 0
 * @size: size of the array.
 * Return: the modified address
*/
void *seT0(char *ptr, char o, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		ptr[i] = o;

	return (ptr);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	seT0(array, 0, size * nmemb);
	return (array);
}
