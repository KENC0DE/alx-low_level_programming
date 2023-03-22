#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: num argument
 * @argv: the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char *ptr;
	int (*reslt)(int, int);

	ptr = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*ptr != '+' &&
		*ptr != '-' &&
		*ptr != '*' &&
		*ptr != '/' &&
		*ptr != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*ptr == '/' || *ptr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	reslt = get_op_func(ptr);
	res = reslt(a, b);

	printf("%d\n", res);

	return (0);

}
