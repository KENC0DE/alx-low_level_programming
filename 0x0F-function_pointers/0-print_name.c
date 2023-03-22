#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - call func make it do the work
 * @name: passed name
 * @f: our passed func
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		 return;
	f(name);
}
