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
char leTTer = 'A';
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);

letter++;
}
while (leTTer <= 'Z')
{
putchar(leTTer);

leTTer++;
}
putchar('\n');
return (0);
}
