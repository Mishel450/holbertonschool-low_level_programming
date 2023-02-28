#include "main.h"
#include <string.h>
/**
 * *_strncat - check the code
 * @dest: is a string
 * @src: is a string
 * @n: is a number
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int size1 = strlen(dest);
int size2 = strlen(src);
if (n > size2)
{
for (i = 0 ; i <= size2 - 1; i++)
{
dest[size1] = src[i];
size1++;
}
}
else
{
for (i = 0 ; i <= n - 1; i++)
{
dest[size1] = src[i];
size1++;
}
}
return (dest);
}
