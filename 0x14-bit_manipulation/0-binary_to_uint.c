#include "main.h"

/**
 * binary_to_uint - change binary number to unsigned int
 * @b: the target number
 * Return: the converter value if all goes well
*/
unsigned int binary_to_uint(const char *b)
{
	int i, n;
	unsigned int *ptr;
	unsigned int base10 = 0;

	if (b == NULL)
		return (0);

	n = strlen(b);
	ptr = malloc(sizeof(unsigned int) * n);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			free(ptr);
			return (0);
		}
		ptr[i] = b[i] - '0';
	}

	i = (n - 1);
	while (i >= 0)
	{
		base10 += ptr[i] * pr(2, n - i - 1);
		i--;
	}

	free(ptr);
	return (base10);
}

/**
 * pr - squares a given number
 * @a: the number to be squared
 * @b: the power a supposed to be rised to
 * Return: the squared number
*/
unsigned int pr(int a, int b)
{
	int i;
	unsigned int squared = 1;

	for (i = 0; i < b; i++)
	{
		squared *= a;
	}

	return (squared);
}
