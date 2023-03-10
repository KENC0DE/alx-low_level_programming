#include <stdio.h>
/**
 * main - print number of agument passed
 * @argc: args
 * @argv: strargs
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
