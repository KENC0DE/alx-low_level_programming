#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @str: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *str)
{
	int i, j;
	char chars[5] = {'A', 'E', 'O', 'T', 'L'};
	char nums[5] = {'4', '3', '0', '7', '1'};
	int n = strlen(str);

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[j] == chars[i] || str[j] - 32 == chars[i])
			{
				str[j] = nums[i];
			}
		}
	}
	return (str);
}
