#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 *
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		for (int n = 0; n < size; n++)
		{
			for (int sh = 0; sh < size; sh++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
