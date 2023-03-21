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
	if (dog dog_t != NULL)
	{
		dog_t doggod;
		doggod = malloc(sizeof(dog_t));
		doggod.age = age;
		doggod.name = malloc(sizeof(name));
		if (doggod.name == NULL)
			free (doggod.name);
		doggod.owner = malloc(sizeof(owner));
		if (doggod.owner == NULL)
			free (doggod.owner);
		strcpy(doggod.name, name);
		strcpy(doggod.owner, owner);
	}
	return (0);
}
