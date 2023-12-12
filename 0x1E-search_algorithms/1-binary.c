#include "search_algos.h"

/**
 * print - prints the passed array of integers.
 * @array: array to be printed.
 * @start: point from where printing starts.
 * @end: where printing ends.
 *
 * Return: nothing.
*/
void print(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
		printf("%d, ", array[start]);

	printf("%d\n", array[end]);
}

/**
 * binary_search - search for a value in a sorted array using binary search.
 *
 * @array: pointer to the first element of the array to be searched.
 * @size: size of the array to be searched.
 * @value: value to be searched in the array.
 *
 * Return: the index of the value.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print(array, left, right);

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
