#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog detail
 * @d: structure pointer
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Ange: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
