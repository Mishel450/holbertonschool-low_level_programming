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
char j[200];
int k;
for (i = 0 ; i <= size1 ; i++)
{
j[i] = dest[i];
}
for (k = 0 ; k <= size2 ; k++)
{
i++;
j[i] = src[k];
}
strcpy(dest, j);
return (dest);
}
