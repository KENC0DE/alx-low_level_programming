#include "main.h"
/**
 * flip_bits - give number of flips needed to convert form on number to other
 * @n: 1st number
 * @m: 2nd number
 * Return: number of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nval, mval;
	unsigned int flips;

	flips = 0;
	for (i = 0; i < 32; i++)
	{
		nval = n & 1;
		mval = m & 1;
		if (nval != mval)
			flips++;

		n = n >> 1;
		m = m >> 1;
	}

	return (flips);
}
