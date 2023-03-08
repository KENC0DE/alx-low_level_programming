#include "main.h"
#include <string.h>

/**
  * leet - Encodes a string into 1337
  * @str: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *str)
{
	int i = 0, j = 0;
	char chars[5] = {'A', 'E', 'O', 'T', 'L'};
	char nums[5] = {'4', '3', '0', '7', '1'};
	int n = strlen(str);

	while (i < 5)
	{
		while (j < n)
		{
			if (str[j] == chars[i] || str[j] - 32 == chars[i])
			{
				str[j] = nums[i];
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
