#include "main.h"

/**
 * get_endianness - gives the endianness of a machine.
 *
 * Return: 1 for little endianness 0 for Big.
*/
int get_endianness(void)
{
	int n = 1, shift;

	shift = sizeof(int) * 8 - 1;
	n >>= shift;
	if (n & 1)
		return (0);

	return (1);
}

