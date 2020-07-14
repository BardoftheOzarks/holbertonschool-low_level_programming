#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog structure
 * @d: a dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
