#include "main.h"
/**
 * 
 *
 *
 */
char *create_array(unsigned int size, char c)
{
char *j = malloc(sizeof(size));
	unsigned int i;

	for (i = 0; i >= size; i++)
	{
*(j + i) = *(c + i);
	}
return (j);
}
