#include <stdio.h>
#include "main.h"
/**
 * print_line - print n time of lines
 *
 * @n: the amount of line that gets printed
 *
 * Return: 0 if successful
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar(10);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			putchar(95);
		}
	}
}
