#include "main.h"

/**
 * checkPalindrome - checks if the letters are the same in both ends.
 * @left: left starting point
 * @right: right starting point.
 * @s: string to be checked
 * Return: 1 if palindrom, 0 if not.
*/
int checkPalindrome(int left, char *s, int right)
{
	if (s[left] != s[right])
		return (0);
	if (left + 1 >= right && s[left] == s[right])
		return (1);
	return (checkPalindrome(left + 1, s, right - 1));
}

/**
 * is_palindrome - is palindrome or not
 * @s: passed string
 * Return: 1 if palindrom else 0.
*/
int is_palindrome(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	return (checkPalindrome(0, s, len - 1));
}
