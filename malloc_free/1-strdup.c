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
	char *s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);
	if (str == NULL)
                return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	if (str != NULL)
	{
		return (s);
	}
	return (0);
}
