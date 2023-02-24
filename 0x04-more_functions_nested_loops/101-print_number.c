#include <stdio.h>
#include "main.h"

/**
* print_number - Prints a number
* @n: The number to print
*/

void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		int digit = n / divisor;

		putchar(digit % 10 + '0');
		divisor /= 10;
	}
}
