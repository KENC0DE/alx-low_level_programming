#include "main.h"

/**
 * flip_bits - gives the number of bit needed to be fliped
 * @n: number
 * @m: number
 * Return: num of flips
*/
ui flip_bits(ulint n, ulint m)
{
	int i, nf, mf;
	ui numflip;

	numflip = 0;
	for (i = 31; i >= 0; i--)
	{
		nf = (n >> i) & 1;
		mf = (m >> i) & 1;
		if (nf != mf)
			numflip++;
	}

	return (numflip);
}
