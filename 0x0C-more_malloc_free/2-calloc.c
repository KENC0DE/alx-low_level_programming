#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of members of arrays
 * @size: the size of the array.
 * Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
}
