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
	char i;
	char j;
	char size1 = strlen(s);
	char size2 = strlen(accept);
	unsigned int length = 0;

	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				length++;
			}
		}
	}
return (length);
}
