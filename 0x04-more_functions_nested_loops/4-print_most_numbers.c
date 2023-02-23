#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: 0 if success
 */
void print_most_numbers(void)
{
int i;
	for (i = 48; i <= 57; i++)
	{
		if ((i != 50) || (i != 52))
		{
			break;
		}
		putchar(i);
	}
putchar(10);
}
