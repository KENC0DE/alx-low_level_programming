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

	for (i = 0; i < n; i++)
	{
		src++;
		if (*src == '\0')
			continue;
	}
	return (strcat(dest, src));
}
