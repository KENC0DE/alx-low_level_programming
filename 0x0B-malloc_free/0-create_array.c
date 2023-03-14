#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array
 * @size: size
 * @c: the char
 * Return: pointer
 */

char *create_array(unsigned size, char c)
{
	if (size == 0)
	{
		return(NULL);
	}
	char *ptr;
	ptr = malloc((sizeof(char) * size) + 1);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
