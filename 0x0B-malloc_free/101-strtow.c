#include "main.h"

/**
 * alloc - allocate memory for 2d pointer
 * @str: memory to be prepared for.
 * Return: pointer to the allocated memory.
*/
char **alloc(char *str)
{
    int idx, ptrs, psize, i;
    char **sgmntd = NULL;

    if (str == NULL || str[0] == '\0')
	return NULL;

    idx = 0, ptrs = 0, psize = 0, i = 0;
    for (; str[idx]; idx++)
    {
	if (str[idx] != ' ' && (str[idx + 1] == ' ' || str[idx + 1] == '\0'))
	    ptrs++;
    }

    sgmntd = malloc(sizeof(char *) * (ptrs + 1));
    if (sgmntd == NULL)
	return NULL;

    idx = 0;
    while (*str)
    {
	if (*str != ' ')
	{
	    int segment_length = 0;
	    char *segment_start = str;
	    
	    while (*str && *str != ' ')
	    {
		segment_length++;
		str++;
	    }

	    sgmntd[psize] = malloc(sizeof(char) * (segment_length + 1));
	    if (sgmntd[psize] == NULL)
	    {
		for (i = 0; i < psize; i++)
		    free(sgmntd[i]);
		free(sgmntd);
		return NULL;
	    }

	    strncpy(sgmntd[psize], segment_start, segment_length);
	    sgmntd[psize][segment_length] = '\0';
	    psize++;
	}
	else
	{
	    str++;
	}
    }

    sgmntd[ptrs] = NULL;
    return sgmntd;
}


/**
 * strtow - split string into words
 * @str: string to be splited.
 * Return: pointer to the splited string
*/
char **strtow(char *str)
{
	char **sgmntd = NULL;
	int idx, ptr, sbPtr, check, id;

	id = 0;
	for (check = 0; str[check]; check++)
	{
		if (str[check] != ' ')
			id++;
	}
	if (id == 0)
		return (NULL);

	idx = 0, ptr = 0, sbPtr = 0;
	sgmntd = alloc(str);
	if (sgmntd == NULL)
		return (NULL);

	for (; str[idx]; idx++)
	{
		if (str[idx] != ' ')
		{
			sgmntd[ptr][sbPtr] = str[idx];
			sbPtr++;
		}
		if (sbPtr > 0 && str[idx] == ' ')
		{
			sgmntd[ptr][sbPtr] = '\0';
			ptr++;
			sbPtr = 0;
		}
	}
	return (sgmntd);
}
