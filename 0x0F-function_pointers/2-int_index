#include "function_pointers.h"

/**
 * int_index - search for integer and return index.
 * @array: the array to be searched.
 * @size: size of the array.
 * @cmp: function that evaluates the number in the array.
 * Return: the numbers index or -1 if non found.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, truth;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		truth = cmp(array[idx]);
		if (truth != 0)
			return (idx);
	}

	return (-1);
}

