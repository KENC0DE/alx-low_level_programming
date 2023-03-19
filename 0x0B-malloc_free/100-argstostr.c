#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int tchar, i, j, k;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		tchar += strlen(av[i]) + 1;
	}
	ptr = malloc(sizeof(char) * tchar);
	if (ptr == NULL)
		return (NULL);

	for (j = 0, k = 0; j < tchar; j++, k++)
	{
		strcpy(ptr + j, av[k]);
		j += strlen(av[k]);
		ptr[j] = '\n';

	}
	ptr[j] = '\0';
	return (ptr);
}
