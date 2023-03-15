#include "main.h"
#include <string.h>
/**
 * *_strdup - check the code.
 * @str: is the pointer to copy.
 * Return: s or 0.
 */
char *_strdup(char *str)
{
	int i;
	int size = strlen(str);
	char *s = malloc(sizeof(char) * size + 1);

	if (s == 0)
		exit (1);
	if (str == 0)
		return (0);
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
