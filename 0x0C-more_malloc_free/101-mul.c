#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * intoInt - char to int
 * @ptr: addres to be converted
 * Return: the converted integer
*/
int *intoInt(const char *ptr)
	{
	int length = strlen(ptr);
	int *ingr = malloc(sizeof(int) * length);

	if (ingr == NULL)
		exit(1);

	for (int i = 0; i < length; i++)
	{
		ingr[length - 1 - i] = ptr[i] - '0';
	}
	return (ingr);
}

/**
 * setTo0 - set every location to 0
 * @location: place to be set to 0
 * @length: of the memory.
 * Return: nothing.
*/
void setTo0(int *location, int length)
{
	for (int i = 0; i < length; i++)
		location[i] = 0;
}

/**
 * multiply - perform multplication opration.
 * @num1: first number
 * @num2: second number
 * @num1l: length of num1
 * @num2l: length of num2
 * @memsize: memory size that holds the product.
 * Return: pointer to product.
*/
int *multiply(const int *num1, const int *num2, int num1l, int num2l, int memsize)
{
	int *product = malloc(sizeof(int) * (memsize * 2));

	if (product == NULL)
		exit(1);

	setTo0(product, (memsize * 2));
	for (int pidx = 0; pidx < num2l; pidx++)
	{
		for (int p1 = 0; p1 < num1l; p1++)
		{
		product[pidx + p1] += num2[pidx] * num1[p1];
		product[pidx + p1 + 1] += product[pidx + p1] / 10;
		product[pidx + p1] %= 10;
		}
	}
	return (product);
}

/**
 * main - multply to integers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: product of two integer multiplication.
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	int num1_length = strlen(argv[1]);
	int num2_length = strlen(argv[2]);
	int result_length = num1_length + num2_length;
	int *integer1 = intoInt(argv[1]);
	int *integer2 = intoInt(argv[2]);

	int *product = multiply(integer1, integer2, num1_length, num2_length, result_length);

	int nonZeroIndex = result_length - 1;

	while (nonZeroIndex > 0 && product[nonZeroIndex] == 0)
	{
		nonZeroIndex--;
	}

	for (int i = nonZeroIndex; i >= 0; i--)
	{
		printf("%d", product[i]);
	}
	printf("\n");

	free(integer1);
	free(integer2);
	free(product);

	return (0);
}
