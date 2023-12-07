#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Fuction that free the memory allocated
 * @d: d
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
