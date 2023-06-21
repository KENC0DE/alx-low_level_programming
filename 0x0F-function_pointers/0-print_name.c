#include "function_pointers.h"

/**
 * print_name - print out the given name.
 * @name: the given name.
 * @f: function to be called to print the names in prefered format.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

