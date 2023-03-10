#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print number of agument passed
 * @argc: args
 * @argv: strargs
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%d\n", 0);
	else
		printf("%d\n", (argc - 1));
	return (0);
}
