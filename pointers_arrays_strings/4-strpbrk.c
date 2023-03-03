#include "main.h"
#include <string.h>
/**
 * *_strpbrk - check the code.
 * @s: is a pointer.
 * @accept: is a pointer.
 * Return: k. 
 */
char *_strpbrk(char *s, char *accept)
{
	char i;
	char j;
	char *k = NULL;
	char sizeS = strlen(s);
	char sizeAccept = strlen(accept);

	for (i = 0; i <= sizeS; i++)
	{
		for (j = 0; j <= sizeAccept; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				k = s[i];
				break;
			}	
		}
	}
	return (k);
}
