#include "main.h"

/**
 * wildcmp - compare stirngs
 * @s1: first stirng
 * @s2: second string
 * Return: 1 if comparable 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
		{
			return (1);
		}

		if (*s1 != '\0' && *(s2 + 1) == '\0')
		{
			return (wildcmp(s1 + 1, s2));
		}

		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
