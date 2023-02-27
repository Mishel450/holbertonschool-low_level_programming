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
int count = 0;
int size = strlen(s);
char newArray[1000];
for (i = size - 1 ; i >= 0 ; i--)
{
newArray[count] = s[i];
count++;
}
strcpy(s, newArray);
}
