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
int j;
int size = strlen(s);
char SepWords[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
for (i = 0; i <= size; i++)
		{
			for (j = 0; j < 13; j++)
			{
				if (SepWords[j] == s[i])
				{
if (s[i + 1] == 97 && s[i + 1] <= 122)
		{
		s[i + 1] - 32;
		}
				}
			}
			}
return (s);
}
