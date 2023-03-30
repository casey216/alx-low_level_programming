#ifndef DOGSTRUCT
#define DOGSTRUCT

/**
 * struct dog - A dog
 * @name: ddog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Properties of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
