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
	while (n > 0)
	{
		putchar(95);
		n--;
	}
	putchar(10);
}
