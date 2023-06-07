#include "main.h"

/**
 * pcnt - identify prime from non-prime
 * @n: number to be tested
 * @nc: devisor
 * Return: 2 if not prime, 1 if prime.
*/
int pcnt(int n, int nc)
{
	if (nc <= 0)
		return (2);
	if (nc != 1 && n % nc == 0)
		return (2);
	if (n % nc == 0)
		return (1);
	return (pcnt(n, nc - 1));
}
/**
 * is_prime_number - give prime
 * @n: tested number
 * Return: 1 if prime, 0 if not.
*/
int is_prime_number(int n)
{
	return (pcnt(n, n - 1) == 1 ? 1 : 0);
}
