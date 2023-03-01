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
int size = strlen(s1);
for (i = 0; i <= size; i++)
{
if (s1 != s2) 
{
break;
}
}
if (i != size)
{
return (s1[i] - s2[i]);
}
else
{
return (s1 - s2);
}
}
