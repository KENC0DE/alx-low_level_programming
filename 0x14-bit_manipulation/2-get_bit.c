#include "main.h"

/**
 * get_bit - gives the bit value at the given function
 * @n: the target number
 * @index: location of bit value
 * Return: value of bit at index
*/
int get_bit(ulint n, ui index)
{
	n >>= index;
	if (n == 0)
		return (-1);

	return ((n & 1) ? 1 : 0);
}
