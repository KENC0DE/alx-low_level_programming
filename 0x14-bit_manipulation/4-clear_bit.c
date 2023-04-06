#include "main.h"

/**
 * clear_bit - change the given point to 0
 * @n: the number to be manipulated
 * @index: the poistion to be changed
 * Return: 1 if success 0 if fail
*/
int clear_bit(ulint *n, ui index)
{
	ulint shift;

	if (index >= sizeof(ulint) * 8)
		return (-1);

	shift = 1UL << index;
	*n |= shift;
	*n ^= shift;

	return (1);
}
