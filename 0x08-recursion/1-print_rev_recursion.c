#include "main.h"

/**
 * _print_rev_recursion - reverse prints stirng
 * @s: passed string to be reversed
 * Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0' || s == NULL)
	{
		putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
