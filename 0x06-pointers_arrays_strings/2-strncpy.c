#include <string.h>
#include "main.h"

/**
 * _strncpy - copy n number of characters
 *
 * @dest: destination
 * @src: source
 * @n: times
 *
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return(dest);
}
