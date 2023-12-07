#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * new_dog - Fuction that copy information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Return the newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *newDog;
	int lenname, largeo, a;

	lenname = strlen(name) + 1;

	largeo = strlen(owner) + 1;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	newDog->name = malloc(lenname);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	for (a = 0; a < lenname; a++)
	{
		newDog->name[a] = name[a];
	}
	newDog->age = age;

	newDog->owner = malloc(largeo);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (a = 0; a < largeo; a++)
	{
		newDog->owner[a] = owner[a];
	}
	return (newDog);
}
