#include <stdlib.>
#include "dog.h"

/**
 * init_dog - edit dog
 * @d: pointer to dog
 * @name: dog name
 * @age: how old it is
 * @owner: who has the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
