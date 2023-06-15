#include "main.h"

/**
 * string_nconcat - add n number of chars on to stirng 1.
 * @s1: first string.
 * @s2: second stirng
 * @n: number of character to be copied.
 * Return: pointer to the new memory space with concatenated s1 and s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concated = NULL;
	unsigned int l1, l2, i;
	char *s1c = s1;
	char *s2c = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; *s1c; l1++)
		s1c++;
	for (l2 = 0; *s2c; l2++)
		s2c++;
	if (n >= l2)
		n = l2;

	concated = malloc(sizeof(char) * (l1 + l2));
	if (concated == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		concated[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		concated[l1] = s2[i];
		l1++, i++;
	}
	concated[l1] = '\0';
	return (concated);
}
