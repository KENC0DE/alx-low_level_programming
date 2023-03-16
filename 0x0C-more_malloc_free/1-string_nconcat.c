#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concat n strings
 * @s1: first
 * @s2: second
 * @n: times
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0, j = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n);

	if (ptr == NULL)
		return (NULL);

	while (i < (len1 + n + 1))
	{
		if (i >= len1)
		{
			ptr[i] = s2[j];
			j++;
		}
		else
		{
			ptr[i] = s1[i];
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
