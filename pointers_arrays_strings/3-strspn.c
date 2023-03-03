#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char size1 = strlen(s);
	char size2 = strlen(accept);
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
