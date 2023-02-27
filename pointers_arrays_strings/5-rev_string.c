#include "main.h"
#include <string.h>
/**
 * rev_string - check the code.
 * @s: is a character
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i;
int z = 0;
int size = strlen(s);
char j[1000];
for (i = size - 1 ; i >= 0 ; i--)
{
j[z] = s[i];
z++;
}
strcpy(s, j);
}
