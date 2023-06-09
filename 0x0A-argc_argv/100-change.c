#include <stdio.h>
#include <stdlib.h>

/**
 * main - excution point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful.
*/
int main(int argc, char **argv)
{
	int divs[] = {25, 10, 5, 2, 1};
	int i, coins, mny1;
	double mny;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	mny = (double)atoi(argv[1]);
	mny1 = atoi(argv[1]);
	coins = 0;
	for (i = 0; i < 5; i++)
	{
		if (mny1 % divs[i] != 0 && mny / divs[i] > 1)
		{
			coins += mny1 / divs[i];
			mny1 = mny1 % divs[i];
			mny = (double)(mny1 % divs[i]);
		}
		if (mny1 % divs[i] == 0)
		{
			coins += mny1 / divs[i];
			printf("%d\n", coins);
			return (0);
		}
	}

	return (0);
}
