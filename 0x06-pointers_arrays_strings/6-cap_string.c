#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalize bruh
 *
 * @str: capitalized
 *
 * Return: character
 */

char *cap_string(char *str)
{
	int i;
	int n = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (str[i] == ' ' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '\t' ||
			str[i] == '}')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
	}
	return (str);
}
