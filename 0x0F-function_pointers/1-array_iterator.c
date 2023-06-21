#include "function_pointers.h"

/**
 * array_iterator - excute the given funtion on condition.
 * @array: the array on which the funtion is going to be excuted.
 * @size: size of the array given.
 * @action: the function to be excuted on the given array.
 * Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

