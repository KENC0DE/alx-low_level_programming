#include "main.h"

/**
 * get_bit - finds bit at the given index.
 * @n: the number to be searched.
 * @index: bit point which will be returned.
 * Return: bit found at the given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bound;
	int bit;

	bound = sizeof(unsigned long int) * 8;
	if (index >= bound)
		return (-1);

	bit = n >> index;
	bit = bit & 1;
	return (bit);
}

