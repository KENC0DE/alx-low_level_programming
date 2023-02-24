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
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			putchar(32);
		}
		putchar(92);
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
