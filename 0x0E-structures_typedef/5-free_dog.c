#include "dog.h"

/**
 * free_dog - free memory that was specified for dog.
 * @d: location to be freed.
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		free(d);
		return;
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}

