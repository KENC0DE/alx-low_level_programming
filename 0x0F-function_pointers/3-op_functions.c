#include "3-calc.h"

/**
 * op_add - performs addition.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: calculated value.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: calculated value.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: calculated value.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: calculated value.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs remainder opration.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: calculated value.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

