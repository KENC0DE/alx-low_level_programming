#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for a value in sorted array using jump search.
 *
 * @array: pointer to the first element of the array.
 * @size: the size of the array.
 * @value: value to be searched.
 *
 * Return: index number of where value is found.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t block, jmp = (size_t)sqrt(size);
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	block = 0;
	while (block < size)
	{
		if (value <= array[block])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, block);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", block, array[block]);

		i = block;
		block += jmp;
	}
	if (value > array[size - 1])
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
		size - 1, size - 1 + jmp);

		block = size - 1;
		i = block;
	}

	if (block < size)
	{
		for (; i <= block; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
