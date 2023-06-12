#include "main.h"

/**
 * argstostr - concatenate passed argumets
 * @ac: number of arguments passed
 * @av: the arguments.
 * Return: pointer to concatenated string.
*/
char *argstostr(int ac, char **av)
{
	char *conCated = NULL;
	int idx, sidx, totLeng, pars, asgn, totP;

	if (ac == 0 || av == NULL)
		return (NULL);

	totLeng = 0;
	for (idx = 0; idx < ac; idx++)
	{
		for (sidx = 0; av[idx][sidx]; sidx++)
			totLeng++;
	}

	conCated = malloc(sizeof(char) * (totLeng + ac));
	if (conCated == NULL)
		return (NULL);

	totP = 0;
	for (pars = 0; pars < ac; pars++)
	{
		for (asgn = 0; av[pars][asgn]; asgn++, totP++)
		{
			conCated[totP] = av[pars][asgn];
		}
		conCated[totP] = '\n';
		totP++;
	}
	conCated[totLeng + ac] = '\0';

	return (conCated);
}
