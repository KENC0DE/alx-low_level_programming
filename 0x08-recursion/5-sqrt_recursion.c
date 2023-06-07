#include "main.h"

/**
 * _sqrt - calculate the square root.
 * @n: given number
 * @k: number used to guess the square root.
 * Return: the square root.
*/
int _sqrt(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k > n)
		return (-1);
	else
		return (_sqrt(n, k + 1));
}
/**
 * _sqrt_recursion - return square root
 * @n: passed number.
 * Return: square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
