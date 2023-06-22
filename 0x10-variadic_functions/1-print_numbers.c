#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: gets printed between numbers.
 * @n: the numbers about to be printed.
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list suck;

	va_start(suck, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(suck, int));
		if (separator != NULL && k != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

