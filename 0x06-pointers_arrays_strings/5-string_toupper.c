#include <ctype.h>
#include "main.h"

/**
 * string_toupper - to upper case
 * @str: target
 * Return: character
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
