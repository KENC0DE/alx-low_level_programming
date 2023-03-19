#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	ptr = malloc(sizeof(*ptr) * i);
	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j])
	{
		ptr[j] = str[j];
		j++;
	}

	ptr[j] = '\0';
	return (ptr);
}
