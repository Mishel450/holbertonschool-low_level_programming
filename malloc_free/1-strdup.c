#include "main.h"
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *s = malloc(sizeof(str));
	*s = &str;
	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		return (s);
	}
	free (str);
	return (0);
}
