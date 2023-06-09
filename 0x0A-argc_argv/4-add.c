#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - excution point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful.
*/
int main(int argc, char **argv)
{
	int i, j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
