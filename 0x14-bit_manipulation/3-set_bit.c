#include "main.h"
/**
 * set_bit - changes the bit to 1 at the given index
 * @n: number to be set
 * @index: setting position
 * Return: setted number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (n == NULL || index >= 32)
		return (-1);

	set = set << index;
	(*n) = (*n) | set;
	return (1);
}
