#include "main.h"
#include <string.h>
/**
 * *_strcat - check the code
 * @dest: is a string
 * @src: is a string
 * @n: is a number
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int size = strlen(dest);
for (i = 0 ; i <= n ; i++)
{
dest[size] = src[i];
size++;
}
return (dest);
}
