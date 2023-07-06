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
	unsigned int flips = 0;

	bit = n ^ m;

	while (bit)
	{
		if (bit & 1)
			flips++;
		bit >>= 1;
	}

	return (flips);
}

