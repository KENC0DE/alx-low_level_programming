#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - compy pointers
 *
 * @dest: where the value is goig to be copied
 * @src: where it will be copied from
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
