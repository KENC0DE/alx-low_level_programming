#include "main.h"
/**
 * _isupper - chechs if the character is upper case or not
 * @c: character being checked
 * Return: is upper(1) if not (0)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
