#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - print half the string
 *
 * @str: to be cut string
 *
 * Return: nothig
 */

void puts_half(char *str)
{
	int i;
	int n = strlen(str);
	int hf;

	if ((n % 2) == 0)
		hf = (n / 2) - 1;
	else
		hf = ((n - 1) / 2);

	for (i = 0; i < n; i++)
	{
		if (i <= hf || (str[i] == '\0'))
			continue;

		putchar(str[i]);
	}
	putchar(10);
}
