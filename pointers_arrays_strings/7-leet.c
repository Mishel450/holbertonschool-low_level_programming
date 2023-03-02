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
	char array[] = { 'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o',
	'0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (array[j] == s[i])
			{
				*(s + i) = *(array + (j + 1));
			}
		}
	}
return (s);
}
