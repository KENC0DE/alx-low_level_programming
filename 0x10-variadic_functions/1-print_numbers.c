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

	if (separetor == NULL)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == n - 1)
			break;
		printf("%s", separetor);
	}
	printf("\n");
}
