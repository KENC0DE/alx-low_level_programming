#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: search field
 * @size: field area
 * @cmp: searcher
 *
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
	}

	return (-1);

}
