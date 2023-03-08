#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - rev curse
 * @s: rev cursed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
