#include "dog.h"

/**
 * init_dog - dog data initializer
 * @d: sturcture to be initialized
 * @name: name of the the dog.
 * @age: age of the dog
 * @owner: owner of the dog.
 * Return: nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

