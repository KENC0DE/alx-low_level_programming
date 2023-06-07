#include "main.h"
/**
 * _puts_recursion - print string in recursion
 * @s: passed string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
