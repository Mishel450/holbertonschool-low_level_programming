#include "main.h"
#include <string.h>
/**
 * _strspn - check the code.
 * @s: is a pointer.
 * @accept: is a pointer.
 * Return: g.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int size1 = strlen(s);
	unsigned int size2 = strlen(accept);
	unsigned int v = 0;
	unsigned int g;

	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				v = 1;
			}
		}
		if (v != 1)
		{
			g = i;
			break;
		}
		v = 0;
	}
	return (g);
}
