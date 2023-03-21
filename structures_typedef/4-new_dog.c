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
	if (dog_t != NULL)
	{
		dog_t doggod;
		doggod = malloc(sizeof(dog_t));
		doggod->age = age;
		doggod->name = malloc(sizeof(name));
		doggod->owner = malloc(sizeof(owner));
	}
	return (0);
}
