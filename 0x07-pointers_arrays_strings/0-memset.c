#include <string.h>
#include "main.h"
/**
 * _memset - fil the memo
 * @s: -ponter
 * @b: char
 * @n: unsigned
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
