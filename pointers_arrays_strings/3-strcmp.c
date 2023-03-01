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
int z1 = 0;
int z2 = 0;
int p1 = 0;
int p2 = 0;
int size1 = strlen(s1);
int size2 = strlen(s2);
for (i = 0 ; i <= size1 ; i++)
{
z1 + s1[i] = p1;
z1 = p1;
}
for (i = 0 ; i <= size2 ; i++)
{
z2 + s2[i] = p2;
z2 = p2;
}
return (z1 - z2);
}
