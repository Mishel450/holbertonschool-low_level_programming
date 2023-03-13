#include "main.h"
/**
 * 
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j = malloc(sizeof(c) * size);

	if (j == 0)
		return (0);
	if (size == 0)
		return (0);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			j[i] = c;
		}
		return (j);
	}
	return (0);
}
