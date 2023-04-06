#include "main.h"

/**
 * set_bit - change the bit to 1 at a given index
 * @n: the address of the number
 * @index: the point to be manipulated
 * Return: the manipulated number
*/
int set_bit(ulint *n, ui index)
{
	ulint shift;

	if (index >= sizeof(ulint) * 8)
		return (-1);

	shift = 1UL << index;
	*n |= shift;
	return (1);
}
