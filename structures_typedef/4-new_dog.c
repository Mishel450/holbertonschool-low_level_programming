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
	char sizeName = strlen(name);
	char sizeOwner = strlen(owner);
	char name1 = malloc((char) * sizeName + 1);
	char owner1 = malloc((char) * sizeOwner + 1);
}
