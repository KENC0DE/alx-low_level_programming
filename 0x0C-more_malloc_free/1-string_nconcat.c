#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat n strings
 * @s1: first
 * @s2: second
 * @n: times
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, j = 0;
	char *ptr;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	ptr = malloc(sizeof(*ptr) * len1 + n + 1);

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
