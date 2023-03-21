#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * struct dog - is the name, age and owner of a dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Description: this structure contains the information of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
