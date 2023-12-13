#include "search_algos.h"

/**
 * printe - prints the passed array of integers.
 * @array: array to be printed.
 * @start: point from where printing starts.
 * @end: where printing ends.
 *
 * Return: nothing.
*/
void printe(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
		printf("%d, ", array[start]);

	printf("%d\n", array[end]);
}

/**
 * bn_search - search for a value in a sorted array using binary search.
 *
 * @array: pointer to the first element of the array to be searched.
 * @value: value to be searched in the array.
 * @left: left of the array.
 * @right: right of the array.
 *
 * Return: the index of the value.
*/
int bn_search(int *array, int value, size_t left, size_t right)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printe(array, left, right);

		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - search sorted array using exponential search.
 *
 * @array: pointer to the first element of the array.
 * @size: the size of the array.
 * @value: target to be searched.
 *
 * Return: the index where the target is found.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	idx = 1;

	while (left <= right)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (value <= array[idx])
		{
			left = idx / 2;
			right = idx;
			printf("Value found between indexes [%ld] and [%ld]\n", left, right);
			return (bn_search(array, value, left, right));
		}

		idx *= 2;
		if (idx >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, size - 1);
			return (bn_search(array, value, idx / 2, size - 1));
		}
	}
	return (-1);
}
