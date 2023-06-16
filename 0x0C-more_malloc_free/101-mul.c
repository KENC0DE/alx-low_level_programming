#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_valid_number - lsj
 * @number: kdjls
 * Return: nos
*/
int is_valid_number(const char *number)
{
	int i;
	int length = strlen(number);

	for (i = 0; i < length; i++)
	{
		if (number[i] < '0' || number[i] > '9')
		{
		return (0);
		}
	}
	return (1);
}

/**
 * multiply - ljs
 * @num1: ljsdf
 * @num2: slkdj
*/
void multiply(const char *num1, const char *num2)
{
	int length1 = strlen(num1);
	int length2 = strlen(num2);
	int resultLength = length1 + length2;
	int *result = calloc(resultLength, sizeof(int));

	int i, j, digit1, digit2, product, position;
	int leadingZeros = 1;

	for (i = length1 - 1; i >= 0; i--)
	{
		for (j = length2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			position = i + j + 1;

			product += result[position];

			result[position] = product % 10;
			result[position - 1] += product / 10;
		}
	}

	for (i = 0; i < resultLength; i++)
	{
		if (result[i] != 0)
		{
		leadingZeros = 0;
		}
		if (!leadingZeros)
		{
		printf("%d", result[i]);
		}
	}

	printf("\n");
	free(result);
}

/**
 * main - manfuns
 * @argc: argc
 * @argv: arga
 * Return: kds
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
