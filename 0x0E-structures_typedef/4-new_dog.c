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
	int nameLen = strlen(name);
	int ownerLen = strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	kenDog = malloc(sizeof(dog_t));
	if (kenDog == NULL)
		return (NULL);
	kenDog->name = malloc(sizeof(char) * (nameLen + 1));
	if (kenDog->name == NULL)
	{
		free(kenDog);
		return (NULL);
	}
	kenDog->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (kenDog->owner == NULL)
	{
		free(kenDog->name);
		free(kenDog);
		return (NULL);
	}

	strcpy(kenDog->name, name);
	kenDog->name[nameLen] = '\0';
	strcpy(kenDog->owner, owner);
	kenDog->owner[ownerLen] = '\0';
	kenDog->age = age;

	return (kenDog);
}

