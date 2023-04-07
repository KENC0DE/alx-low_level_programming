#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 1 for L-end 0 for B-end
*/
int get_endianness(void)
{
	int ind = 1;
	char *ptr;

	ptr = (char *)&ind;

	if (*ptr == 1)
	{
		ind = 1;
	}
	else
	{
		ind = 0;
	}

	return (ind);
}
