#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separetor: between the items
 * @n: number of agurments passed
 * Return: nothing
*/
void print_numbers(const char *separetor, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separetor != NULL)
			printf("%s", separetor);
	}
	printf("\n");
	va_end(ap);
}
