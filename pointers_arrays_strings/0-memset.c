#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_memset - check the code.
 * @s: is a pointer.
 * @b: is a character.
 * @n: is a number.
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
char j = 0;

for (i = 0; i < n; i++)
	{
		if (i % 10)
		{
			*(s + i) = ' ';
		}

		if (!(i % 10) && i)
		{
			*(s + i) = '\n';
		}
		if (j == b)
		{
			*(s + i) = b;
		}
	j++;
	}
return (s);
}
