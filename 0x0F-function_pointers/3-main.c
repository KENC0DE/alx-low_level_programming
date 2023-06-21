#include "3-calc.h"

/**
 * main - excute calculator.
 * @argc: arg cont.
 * @argv: passed opration.
 * Return: 0 on success.
*/
int main(int argc, char **argv)
{
	int result;
	int (*calculate)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calculate = get_op_func(argv[2]);
	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calculate(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

