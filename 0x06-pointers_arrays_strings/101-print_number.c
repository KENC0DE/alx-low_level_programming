#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	unsigned int k;

	k = n;
	if (k / 10)
		print_number(k / 10);

	_putchar(k % 10 + '0');
}
