#include "main.h"

/**
 * array_range - create array of integers.
 * @min: the minimum number of integers
 * @max: maximum number of integers
 * Return: pointer to the created memory space.
*/

int *array_range(int min, int max)
{
	int *integers = NULL;
	int p, diff;

	if (min > max)
		return (NULL);

	diff = ((max - min) + 1);
	integers = malloc(sizeof(int) * diff);
	if (integers == NULL)
		return (NULL);

	for (p = 0; p < diff; p++)
	{
		integers[p] = min;
		min++;
	}

	return (integers);
}
