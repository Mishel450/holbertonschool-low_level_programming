#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - is a function to print dog
 * @d: is the name, age and the owner of the dog.
 * Return: noting.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
