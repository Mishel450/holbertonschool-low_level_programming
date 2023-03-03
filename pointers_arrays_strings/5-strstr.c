#include "main.h"
#include <string.h>
/**
 * *_strstr - check the code.
 * @haystack: is a pointer.
 * @needle: is a pointer.
 * Return: k.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *k = NULL;
	int v = 0;
	int size1 = strlen(haystack);
	int size2 = strlen(needle);

	for (i = 0; i < size1; i++)
	{
		b = i;
j = 0;
			if (haystack[i] == needle[j] && v == 0)
			{
				for (j = 0 ; j < size2; j++)
				{
					if (haystack[b] != needle[j])
					{
						break;
					}
					if (j == size2)
					{
						k = &haystack[i];
					v = 1;
					}
					b++;
				}
			}
	}
	return (k);
}
