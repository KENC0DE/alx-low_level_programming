#include "variadic_functions.h"

/**
 * print_strings - functions that prints strings.
 * @separator: string to be printed between strings.
 * @n: the number of string passed to the function.
 * Return: nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list suck;
	char *str;

	va_start(suck, n);
	for (k = 0; k < n; k++)
	{
		str = va_arg(suck, char *);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (separator != NULL && k != n - 1)
			printf("%s", separator);
	}
	va_end(suck);
	printf("\n");
}

