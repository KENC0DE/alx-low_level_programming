#include "main.h"

/**
 * _pow_recursion - raise using recursion
 * @x: number to be raised
 * @y: raising constant
 * Return: the raised number.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
