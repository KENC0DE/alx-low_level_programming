#include "main.h"

/**
 * reverse_array - revers the array
 *
 * @a: to be reversed
 * @n: numbers to be reversed
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	char tmp;

	for (i = 0, j = n -1; i <= j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
