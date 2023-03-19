#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	ptr = malloc(sizeof(*ptr) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}

	l = 0;
	while (l < j)
	{
		ptr[i + l] = s2[l];
		l++;
	}

	ptr[i + j] = '\0';
	return (ptr);
}
