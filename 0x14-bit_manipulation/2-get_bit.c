#include "main.h"
/**
 * get_bit - give bit at specified index
 * @n: target number
 * @index: required point
 * Return: index value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1 ? 1 : 0);
}
