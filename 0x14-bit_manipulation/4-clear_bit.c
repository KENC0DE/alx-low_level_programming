#include "main.h"

/**
 * clear_bit - alters bit at a given index (change it to 0)
 * @n: pointer to the number that is going to be altered.
 * @index: the position we are going alter.
 * Return: 1 if it worded. -1 if it is error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	unsigned int bound;

	bound = sizeof(unsigned long int) * 8;
	if (n == NULL || index >= bound)
		return (-1);

	bit = 1;
	bit = bit << index;
	bit = ~bit;
	*n = (*n) & bit;

	return (1);
}

