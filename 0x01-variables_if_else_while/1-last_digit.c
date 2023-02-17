#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - My entry point
 *
 * Description: To print out the last number of a number given
 *
 * Return: Always zero (success)
 */
int main(void)
{
int n;
int ls;
srand(time(0));
n = rand() - RAND_MAX / 2;
ls = n % 10;
if (ls > 5)
{
printf("Last digit of %d is greater than 5\n", n);
}
else if (ls == 0)
{
printf("Last digit of %d is 0\n", n);
}
else
{
printf("Last digit of %d is less than 6 and not 0\n", n);
}
return (0);
}
