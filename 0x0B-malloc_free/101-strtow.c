#include "main.h"

/**
 * alloc - prepare the memory space.
 * @str: memory to be prepared for.
 * Return: 1prepared memory
*/
char **alloc(char *str)
{
	char **cuted = NULL;
	int idx, wdth, hyt, frup;

	if (str == NULL) /* || str == "")*/
		return (NULL);

	hyt = 0;
	for (idx = 0; str[idx]; idx++)
	{
		if (str[idx] != ' ' && str[idx + 1] == ' ')
			hyt++;
		wdth++;
	}

	cuted = malloc(sizeof(char *) * (hyt + 1));
	if (cuted == NULL)
		return (NULL);
	for (idx = 0; idx < hyt; idx++)
	{
		cuted[idx] = malloc(sizeof(char) * wdth);
		if (cuted[idx] == NULL)
		{
			for (frup = 0; frup < idx; frup++)
				free(cuted[frup]);
			free(cuted);
			return (NULL);
		}
	}
	cuted[hyt] = NULL;
	return (cuted);
}

/**
 * strtow - splits strings
 * @str: string to be splited
 * Return: poiner to the splited string
*/
char **strtow(char *str)
{
	int idx, pprs, asgn;
	char **cuted = NULL;

	cuted = alloc(str);

	asgn = 0;
	for (idx = 0; str[idx]; idx++)
	{
		if (str[idx] != ' ')
		{
			for (pprs = 0; str[idx] != ' '; pprs++, idx++)
			{
				cuted[asgn][pprs] = str[idx];
			}
			cuted[asgn][pprs] = '\0';
			asgn++;
		}
	}

	return (cuted);
}
