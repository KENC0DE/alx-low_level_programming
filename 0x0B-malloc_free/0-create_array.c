#include "main.h"

/**
 * create_array - creates arrays of a given size
 * @size: size of array to be created
 * @c: char that going to intialize the memory space
 * Return: pointer to the created array
*/
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int k;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		array[k] = c;

	return (array);
}
