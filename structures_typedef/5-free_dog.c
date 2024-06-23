#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory
 * @d: parameter for memory to be free'd
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
