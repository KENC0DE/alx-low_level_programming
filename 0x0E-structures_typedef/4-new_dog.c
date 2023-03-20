#include "dog.h"
#include <stdlib.h>
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
	ndg->name = name;
	ndg->age = age;
	ndg->owner = owner;

	return (ndg);
}
