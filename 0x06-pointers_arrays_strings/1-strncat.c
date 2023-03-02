#include <string.h>
#include "main.h"

/**
 * _strncat - concatnate n ammount
 *
 * @dest: added to
 * @src: taken from
 * @n: number of times
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char c[100];

	for (i = 0; i < n; i++)
	{
		if (*src != '\0' && n > 0)
		{
			c[i] = *(src)++;
		}
	}
	return (strcat(dest, c));
}
