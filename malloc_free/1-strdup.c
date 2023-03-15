#include "main.h"
#include <string.h>
/**
 * *_strdup - check the code.
 * @str: is the pointer to copy.
 * Return: s or 0.
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
	int i;
	int size = strlen(str);
	char *s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
	}
return (NULL);
}
