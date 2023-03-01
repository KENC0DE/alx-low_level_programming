#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * @dest: first var
 * @src: second variable
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
