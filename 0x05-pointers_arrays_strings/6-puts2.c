#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - print strings on even
 *
 * @str: modified string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i
	int j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if ((i % 2) != 0)
		{
			continue;
		}
		putchar(s[i]);
	}
	putchar(10);
}
