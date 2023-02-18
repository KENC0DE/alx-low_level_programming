#include <stdio.h>

/**
 * main - My entry point
 *
 * Description: alphabets
 *
 * Return: success(0)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);

letter++;
}
putchar('\n');
return (0);
}
