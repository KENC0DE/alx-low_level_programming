#include "main.h"

/**
 * print_binary - prints binary form of a number
 * @n: passed integer
 * Return: nothing
*/
void print_binary(ulint n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}
