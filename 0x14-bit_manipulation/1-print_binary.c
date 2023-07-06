#include "main.h"

/**
 * print_binary - prints binary form of the number given.
 * @n: number passed to the function.
 * Return: nothing.
*/
void print_binary(unsigned long int n)
{
	int bit;

	if (n == 0 || n == 1)
	{
		putchar('0' + n);
		return;
	}
	bit = n & 1;
	print_binary(n >> 1);
	putchar('0' + bit);
}

