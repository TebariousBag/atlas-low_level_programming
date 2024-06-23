#ifndef DOG_H
#define DOG_H

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

/**
 * dog_t - new type named dog_t for struct dog
 */
typedef structdog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
