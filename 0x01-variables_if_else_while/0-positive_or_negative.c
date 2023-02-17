#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - My entry point
 *
 * Desription: test wether negative or positive
 *
 * Return: always Zero (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	  {
	   printf("is positive\n");
	  }
	else if(n == 0)
	  {
	   printf("is zero\n");
	  }
	else
	  {
	   prinf ("is negative\n");
	  }
	return (0);
}
