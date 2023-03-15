#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	int i;
	int size = strlen(str);
	char *s = malloc(sizeof(size));

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		return (s);
	}
	return (0);
}
