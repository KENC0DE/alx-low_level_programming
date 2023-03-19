#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* string_nconcat - prints concatenate string;
* @s1: input string.
* @s2: input string.
* @n: len s2 string for print.
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	ptr = strcpy(ptr, s1);
	ptr = strncat(ptr, s2, n);
	ptr[l1 + n + 2] = '\0';

	return (ptr);
}
