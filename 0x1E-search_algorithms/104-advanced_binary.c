#include "search_algos.h"

/**
 * printAd - prints the passed array of integers.
 * @array: array to be printed.
 * @start: point from where printing starts.
 * @end: where printing ends.
 *
 * Return: nothing.
*/
void printAd(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
		printf("%d, ", array[start]);

	printf("%d\n", array[end]);
}

/**
 * binary_recur - recursion helper.
 * @array: the search array.
 * @value: target value.
 * @left: left index.
 * @right: right index.
 *
 * Return: index of value.
*/
int binary_recur(int *array, int value, size_t left, size_t right)
{
	size_t mid = (left + right) / 2;

	printAd(array, left, right);

	if (value == array[mid])
	{
		while (1)
		{
			if (array[mid - 1] != value)
				break;

			mid--;
		}
		return (mid);
	}
	if (mid == 0 || left == right)
		return (-1);

	if (value > array[mid])
		left = mid + 1;
	else
		right = mid - 1;

	return (binary_recur(array, value, left, right));
}

/**
 * advanced_binary - optimized binary serach
 *
 * @array: pointer to the first integer of the list.
 * @size: the size of the list.
 * @value: value to be searched in the list.
 *
 * Return: the index where the value is found.
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recur(array, value, 0, size - 1));
}
