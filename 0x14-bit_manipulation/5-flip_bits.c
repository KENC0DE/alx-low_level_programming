#include "main.h"

/**
 * flip_bits - calculate the number of bit needed to be flipped.
 * @n: the first number.
 * @m: the second number.
 * Return: return number of flips.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;
	unsigned int flips;

	bit = n ^ m;
	if (bit < 0)
		return (0);

	for (flips = 0; bit; bit = bit >> 1)
	{
		if (bit & 1)
			flips++;
	}

	return (flips);
}

