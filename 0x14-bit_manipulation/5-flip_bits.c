#include "main.h"

/**
 * flip_bits - gives the number of bit needed to be fliped
 * @n: number
 * @m: number
 * Return: num of flips
*/
ui flip_bits(ulint n, ulint m)
{
	int i;
	ulint dif;
	ui ndif;

	dif = n ^ m;
	ndif = 0;
	i = sizeof(ulint) * 8;
	for (i--; i >= 0; i--)
	{
		if ((dif >> i) & 1)
			ndif++;
	}

	return (ndif);
}
