#include "main.h"
/**
 * binary_to_uint - changes binary number to base ten.
 * @b: string to binary digits
 *
 * Return: converted base ten
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int base10;
	int i;

	if (!b)
		return (0);

	i = 0;
	base10 = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		base10 = 2 * base10 + (b[i] - '0');
		i++;
	}
	return (base10);
}
