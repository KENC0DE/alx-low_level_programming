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
putchar('\n');
letter++;
}

return (0);
}
