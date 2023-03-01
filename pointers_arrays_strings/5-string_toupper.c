#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
char *string_toupper(char *s)
{
int i;
int j;
int upper = 65;
int size = strlen(s);
for (i = 0; i <= size ; i++)
{
	for (j = 97 ; j <= 122; j++)
	{
		if (j = s[i])
		{
		s[i] = upper;
		break;
		}
	upper++;
	}
}
return (s);
}
