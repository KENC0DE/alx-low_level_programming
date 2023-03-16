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
	unsigned int i;
	char *ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	if (n >= strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	strcpy(ptr, s1);
	strncat(ptr + strlen(s1), s2, n);
	ptr[strlen(s1) + n] = '\0';

	return (ptr);
}
