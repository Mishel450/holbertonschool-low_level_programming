#include "dog.h"
#include <stdlin.h>
/**
 * free_dog - is for free the information.
 * @d: is the name, age and the owner of the dog.
 * Return: noting.
 */
void free_dog(dog_t *d)
{
	free (d->name);
	free (d->age);
	free (d->owner);
}
