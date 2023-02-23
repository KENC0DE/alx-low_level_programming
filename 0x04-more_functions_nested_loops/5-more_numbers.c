#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbes 10 times from 0 to 14
 *
 * Return: 0 if success
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar(10);
	}
}
