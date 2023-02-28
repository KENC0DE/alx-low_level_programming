#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * _atoi - number predator
 *
 * @s: the jungle
 *
 * Return: intiger
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	char c;

	do {
		c = *s++;
		if (isdigit(c))
		{
			num = (num * 10) + (c - '0');
		}
		else if (c == '-')
		{
			sign = -1;
		}
	} while (!isdigit(c) && c != '\0');
	return (num * sign);
}
