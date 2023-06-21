#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcode.
 * @argc: arg count.
 * @argv: comand to be printed as opcode.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (op = 0; op < atoi(argv[1]); op++)
	{
		printf("%02hhx", *((char *)main + op));
		if (op < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

