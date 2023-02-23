#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints diagonal line giagonally
 *
 * @n: number of times it should be printed
 *
 * Return: 0 if successeful
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		putchar(92);
		n--;
	}
	putchar(10);
}
