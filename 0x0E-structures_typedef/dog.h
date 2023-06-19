#ifndef KEN_HEADER
#define KEN_HEADER

#include <stdio.h>

/**
 * struct dog - dog list.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

