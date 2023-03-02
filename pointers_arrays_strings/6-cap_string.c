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
char z;
int j;
int size = strlen(s);
char SepWords[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; i <= size; i++)
		{
			for (j = 0; j < 13; j++)
			{
				if (SepWords[j] == s[i])
				{
if (s[i + 1] == 97 && s[i + 1] <= 122)
		{
		z = s[i] - 32;
s[i + 1] = z;
		}
				}
			}
			}
return (s);
}
