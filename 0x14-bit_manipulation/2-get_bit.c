#include "main.h"

/**
 * get_bit - gives the bit value at the given function
 * @n: the target number
 * @index: location of bit value
 * Return: value of bit at index
*/
int get_bit(ulint n, ui index)
{
	if (index >= sizeof(ulint) * 8)
		return (-1);

	n >>= index;

	return ((n & 1) ? 1 : 0);
}
