#include "main.h"

/**
 * factorial - gives factorial of a given number
 * @n: given number.
 * Return: functorial of the given number.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
