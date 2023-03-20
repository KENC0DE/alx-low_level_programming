#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog memory
 * @d: address of the memory
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
