#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	char *k;
	int v = 0;
	int size1 = strlen(haystack);
	int size2 = strlen(needle);

	for (i = 0; i < size1; i++)
	{
		b = i
			if (haystack[i] == needle[j] && v == 0)
			{
				for ( ; j < size2; j++)
				{
					if (haystack[b] != needle[j])
					{
						break;
					}
					if (j == size2)
					{
						k = &haystack[i];
					}
					b++;
				}
			}
	}
	return (k);
}
