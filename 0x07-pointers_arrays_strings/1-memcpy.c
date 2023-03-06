#include "main.h"
/**
 * _memcpy - memer
 * @dest: dester
 * @src: srcer
 * @n: ner
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}
