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
	int i, j;
	char temp;
	int n = strlen(s);
	
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
