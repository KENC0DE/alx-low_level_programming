#include <stdio.h>
#include "main.h"
/**
 * print_square - prints square
 *
 * @size: size of the square
 *
 * Return: 0 if success
 */
void print_square(int size)
{
	for (int n = 0; n < size; n++)
	{
		for (int sh = 0; sh < size; sh++)
		{
			putchar(35);
		}

		putchar('\n');

		if (size <= 0)
		{
			continue;
		}

		putchar('\n');
	}
	putchar('\n');
}
