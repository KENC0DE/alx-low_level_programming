#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: value one
 * @b: value two
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
