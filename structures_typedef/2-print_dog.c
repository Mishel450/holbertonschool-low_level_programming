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
		if (name != NULL)
			d->name = name;
		else
			d->name = "(nil)";
		if (age != NULL)
			d->age = age;
		else
			d->age = "(nil)";
		if (owner != NULL)
			d->owner = owner;
		else
			d->owner = "(nil)";

		printf("Name: %d\nAge: %d\nOwner: %d", name, age, owner);
	}
}
