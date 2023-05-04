#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: passed number
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int k = n;

	if (n == 0)
		printf("%c", '0');

	j = 0;
	while (k)
	{
		k = k >> 1;
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			putchar('1');
		else
			putchar('0');
	}
}
