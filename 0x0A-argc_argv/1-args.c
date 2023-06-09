#include <stdio.h>

/**
 * main - excution point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful.
*/
int main(int argc, char **argv)
{
	if (argv != NULL)
		printf("%d\n", argc - 1);

	return (0);
}
