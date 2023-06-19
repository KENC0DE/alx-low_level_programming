#include "dog.h"

/**
 * new_dog - create new dog int the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new clreated dog info.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kenDog;

	kenDog = malloc(sizeof(dog_t));
	if (kenDog == NULL)
		return (NULL);
	kenDog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (kenDog->name == NULL)
		return (NULL);
	kenDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (kenDog->owner == NULL)
		return (NULL);

	strcpy(kenDog->name, name);
	strcpy(kenDog->owner, owner);
	kenDog->age = age;

	return (kenDog);
}

