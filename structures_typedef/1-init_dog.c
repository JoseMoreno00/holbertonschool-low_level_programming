#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Fuction that inicialized a variables of the structure dog
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
