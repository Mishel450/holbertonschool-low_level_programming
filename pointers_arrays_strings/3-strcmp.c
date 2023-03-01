#include "main.h"
#include <string.h>
/**
 * _strcmp - check the code
 * @s1: is a array.
 * @s2: is a array.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int j = 0;
int size = strlen(s1);
for (i = 0; i <= size; i++)
{
if (s1 != s2) 
{
s1[i] - s2[i];
break;
}
}
return (j);
}
