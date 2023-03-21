#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggod;
	doggod = malloc(sizeof(dog_t));
	if (doggod == NULL)
	{
		free (doggod);
		return (0);
	}
	doggod->age = age;
	if (age < 0)
		return (0);
	doggod->name = malloc(sizeof(name));
	if (doggod->name == NULL)
	{
		free (doggod->name);
	free (doggod);
		return (0);
	}
	doggod->owner = malloc(sizeof(owner));
	if (doggod->owner == NULL)
	{
		free (doggod->owner);
		free (doggod);
		return (0);
	}
	strcpy(doggod->name, name);
	strcpy(doggod->owner, owner);
	return (doggod);
}
