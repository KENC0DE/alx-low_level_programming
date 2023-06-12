#include "main.h"

/**
 * _strdup - create memory of size of passed string
 * @str: pointer to the string passed
 * Return: pointer to newly created memory
*/
char *_strdup(char *str)
{
	char *copy = NULL;
	int k;

	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k])
		k++;

	copy = malloc(sizeof(char) * k);
	if (copy == NULL)
		return (NULL);

	k = 0;
	while (str[k])
	{
		copy[k] = str[k];
		k++;
	}
	copy[k] = '\0';

	return (copy);
}
