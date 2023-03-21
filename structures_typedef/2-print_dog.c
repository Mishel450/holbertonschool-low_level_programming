#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - is a function to print dog
 * @d: is the name, age and the owner of the dog.
 * Return: noting.
 */
void print_dog(struct dog *d)
{
char *name;
        float age;
        char *owner;

	if (d != NULL)
	{

		if (name == NULL)
			d->name = "(nil)";
		if (owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s", name, age, owner);
	}
}
