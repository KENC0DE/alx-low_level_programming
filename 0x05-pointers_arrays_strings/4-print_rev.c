#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse printing
 *
 * @s: target to be reversed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int n = strlen(s);

	for (i = n; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}
