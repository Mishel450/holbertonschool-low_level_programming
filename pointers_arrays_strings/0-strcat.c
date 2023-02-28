#include "main.h"
#include <string.h>
/**
 * *_strcat - check the code
 * @dest: is a string
 * @src: is a string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
int size1 = strlen(dest);
int size2 = strlen(src);
for (i = 0 ; i <= size2 ; i++)
{
dest[size1] = src[i];
size1++;
}
return (dest);
}
