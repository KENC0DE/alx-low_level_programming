#include "main.h"

/**
 * cnvrTOint - converet to integer
 * @numString: number stored as string.
 * Return: pointer to the converted number.
*/
int *cnvrTOint(char *numString)
{
	int i, j;
	int leng = strlen(numString);
	int *integer = NULL;

	integer = malloc(sizeof(int) * leng);
	if (integer == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	j = leng - 1;
	for (i = 0; i < leng; i++, j--)
		integer[i] = numString[j] - '0';

	return (integer);
}

/**
 * set0 - seth the values to 0
 * @target: to be initialized with 0
 * @length: target length
 * Return: nothing
*/
void set0(int *target, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		target[i] = 0;
	}
}
/**
 * multiply - performs multipilication operation
 * @int1: integer 1
 * @int2: integer 2
 * @int1l: integer 1 length
 * @int2l: integer 2 length
 * Return: pointer to product.
*/
int *multiply(int *int1, int *int2, int int1l, int int2l)
{
	int i, j, memsize, tmp, rev, carry;
	int *prd;

	memsize = (int1l + int2l);
	prd = malloc(sizeof(int) * (memsize));
	if (prd == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	tmp = 0, rev = memsize - 1;
	set0(prd, memsize);
	for (i = 0; i < int1l; i++)
	{
		carry = 0;
		for (j = 0; j < int2l; j++)
		{
			tmp = int1[i] * int2[j] + carry;
			carry = tmp / 10;
			prd[rev - j] += tmp % 10;
			if (prd[rev - j] >= 10)
			{
				prd[rev - j] -= 10;
				prd[rev - j - 1] += 1;
			}
		}
		prd[rev - j] += carry;
		rev--;
	}
	return (prd);
}

/**
 * main - excution point for performing multiplication operation.
 * @argc: number of arguments passed to the program.
 * @argv: the arguments passed.
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, j, len1, len2;
	int *int1, *int2, *result = NULL;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	int1 = cnvrTOint(argv[1]);
	int2 = cnvrTOint(argv[2]);
	result = multiply(int1, int2, len1, len2);
	i = 0;
	while (i < (len1 + len2))
	{
		if (result[i] != 0)
			break;
		i++;
	}
	for (; i < (len1 + len2); i++)
		printf("%d", result[i]);
	printf("\n");
	free(int1);
	free(int2);
	free(result);
	return (0);
}

