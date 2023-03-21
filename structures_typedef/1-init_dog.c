#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize the structure dog.
 * @d: is the pointer of the structure.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*(*d)->name = *name;
	(*d)->age = age;
	*(*d)->owner = *owner;
}
