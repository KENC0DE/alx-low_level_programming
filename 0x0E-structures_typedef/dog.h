#ifndef KEN_HEADER
#define KEN_HEADER

/**
 * struct dog - dog id
 * @name: its name
 * @age: how old did it lived
 * @owner: whose property it is
 *
 * Description: who now what I would do in the future
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
