#include "main.h"
#include <string.h>
/**
 * *cap_string - check the code.
 * @s: is a string.
 * Return: s.
 */
char *cap_string(char *s)
{
int i = 0;
int j = i;
char upper = 65;
int lower;
int size = strlen(s);
for ( ; i <= size; i++)
{
	if (s[i] == 32 || 9 || 10 || 44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125)
	{
j++;
		if (s[j] >= 97 && s[j] <= 122)
{
	for (lower = 97 ; lower <= 122; lower++)
	{
		if (lower == s[j])
		{
s[j] = upper;
		break;
		}
			upper++;
				}
break;
}
	}	
lower = 97;
upper = 65;
j = i;
j++;
}
return (s);
}
