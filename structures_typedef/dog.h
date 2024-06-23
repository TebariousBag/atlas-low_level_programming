#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - dogs info
 * @name: name of dog
 * @age: age of dog
 * @owner: the dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
