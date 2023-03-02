#include "main.h"
#include <string.h>
/**
 * *leet - check the code.
 * @s: is a string.
 * Return: s.
 */
char *leet(char *s)
{
	int i;
	int j;
	int size = strlen(s);
	char arrayL[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char arrayN[] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(arrayL + j) == *(s + i))
			{
				*(s + i) = *(arrayN + j);
			}
		}
	}
return (s);
}
