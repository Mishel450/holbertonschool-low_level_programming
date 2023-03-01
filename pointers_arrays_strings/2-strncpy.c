#include "main.h"
#include <string.h>
/**
 * *_strncpy - check the code
 * @dest: is a string
 * @src: is a string
 * @n: is a number
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int size = strlen(src);
if (size >= n)
{
for (i = 0 ; i <= size -1 ; i++)
{
dest[i] = src[i];
}
return (dest);
}
else
{
for (i = 0 ; i <= n - 1 ; i++)
{
dest[i] = src[i];
}
return (dest);
}
}
