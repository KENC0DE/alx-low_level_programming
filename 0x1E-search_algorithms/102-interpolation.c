#include "search_algos.h"

/**
 * interpolation_search - search sorted array by using interppolation.
 * @array: pointer to the first element of the array.
 * @size: the size of the array.
 * @value: target to be searched.
 *
 * Return: the index where the target is found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
			pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);

		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
