#include "main.h"
#include <string.h>
/**
 * *cap_string - check the code.
 * @s: is a string.
 * Return: s.
 */
char *cap_string(char *s)
{
int i;
char upper = 65;
int lower;
int size = strlen(s);
for (i = 0 ; i <= size; i++)
{
	if (s[i + 1] == 32 || 9 || 10 || 44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
	for (lower = 97 ; lower <= 122; lower++)
	{
		if (lower == s[i + 1])
		{
s[i + 1] = upper;
		break;
		}
			upper++;
				}
}
	}	
lower = 97;
upper = 65;
}
return (s);
}
