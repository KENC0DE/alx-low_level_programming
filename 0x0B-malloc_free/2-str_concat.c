#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *conCated = NULL;
	int ken, leg1, leg2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leg1 = 0;
	while (s1[leg1])
		leg1++;
	leg2 = 0;
	while (s2[leg2])
		leg2++;

	conCated = malloc(sizeof(char) * (leg1 + leg2 + 1));
	if (conCated == NULL)
		return (NULL);

	for (ken = 0; ken < (leg1 + leg2); ken++)
	{
		conCated[ken] = s1[ken];
		if (ken == leg1)
		{
			j = 0;
			for (; ken < (leg1 + leg2); ken++, j++)
				conCated[ken] = s2[j];
		}
	}
	conCated[leg1 + leg2] = '\0';
	return (conCated);
}
