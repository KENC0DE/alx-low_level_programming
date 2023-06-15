#include "main.h"

/**
 * string_nconcat - concatenate n characters from s2 to s1.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to be copied from s2.
 * Return: pointer to the new memory space with concatenated s1 and s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated = NULL;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
