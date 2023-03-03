#include "main.h"
#include <string.h>
/**
 * *_strchr - check the code.
 * @s: is a pointer.
 * @c: is a character.
 * Return: j or 0.
 */
char *_strchr(char *s, char c)
{
	int size = strlen(s);
	int i;
	char *p = NULL;

	for (i = 0; i <= size; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
