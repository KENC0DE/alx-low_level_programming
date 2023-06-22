#include "variadic_functions.h"

/**
 * sum_them_all - adds all of its arguments.
 * @n: the first argument.
 * Return: the sum of the arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum = 0;
	va_list suck;

	if (n == 0)
		return (0);

	va_start(suck, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(suck, int);
	}

	return (sum);
}

