#include "main.h"

/**
 * _pow - raise the number to the power given
 * @num: the number to be raised.
 * @pw: the power to which the number will be raised to.
 * Return: the raised number.
*/
int _pow(int num, int pw)
{
	int i, sq;

	for (i = 0, sq = 1; i < pw; i++)
		sq = sq * num;

	return (sq);
}

/**
 * binary_to_uint - changes binary number to unsigned int
 * @b: binary string.
 * Return: converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	int pw, len;
	unsigned int b10;

	if (!b)
		return (0);

	len = strlen(b) - 1;
	pw = 0, b10 = 0;
	while (len > 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		b10 += (b[len] - '0') * _pow(2, pw);
		pw++;
		len--;
	}

	return (b10);
}

