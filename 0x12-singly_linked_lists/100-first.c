#include <stdio.h>

void executeFirst(void) __attribute__((constructor));

/**
 * executeFirst - prints before main.
*/
void executeFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

