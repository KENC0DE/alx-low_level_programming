#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of agument passed
 * @argc: args
 * @argv: strargs
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	}
	return (0);
}
