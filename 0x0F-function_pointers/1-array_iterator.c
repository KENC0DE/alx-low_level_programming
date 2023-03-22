#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each element of array
 * @array: the array pointer
 * @size: the size of array
 * @action: the passed funciton
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0 || action == NULL)
		return;
	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
