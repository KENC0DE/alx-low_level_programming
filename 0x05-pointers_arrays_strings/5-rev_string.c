#include <string.h>
#include "main.h"

/**
 * rev_string - reverse strings
 *
 * @s: to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
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
