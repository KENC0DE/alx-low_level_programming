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
			for (int n = 0; n < i; n++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i <= 0)
			{
				continue;
			}
			putchar('\n');
		}

	}
	putchar('\n');
}
