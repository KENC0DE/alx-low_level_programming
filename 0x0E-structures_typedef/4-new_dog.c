#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog -create new dog
 * @name: dog name
 * @age: it's age
 * @owner: who owns it
 * Return: loc new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndg;

	ndg = malloc(sizeof(dog_t));
	if (ndg == NULL)
		return (NULL);
	ndg->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ndg->name == NULL)
	{
		free(ndg->name);
		free(ndg);
		return (NULL);
	}

	ndg->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ndg->owner == NULL)
	{
		free(ndg->owner);
		free(ndg);
		return (NULL);
	}

	strcpy(ndg->name, name);
	strcpy(ndg->owner, owner);
	ndg->age = age;

	return (ndg);
}
