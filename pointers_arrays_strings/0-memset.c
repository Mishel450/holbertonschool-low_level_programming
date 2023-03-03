#include "main.h"
#include <string.h>
/**
 * *_memset - check the code.
 * @s: is a pointer.
 * @b: is a character.
 * @n: is a number.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
return (s);
}
