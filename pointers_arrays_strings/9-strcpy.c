#include "main.h"
#include <string.h>
/**
 * *_strcpy - check the code.
 * @dest: is a pointer
 * @src: is a string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int size = strlen(src);
for (i = 0 ; i <= size ; i++)
{
dest[i] = src[i];
}
return (dest);
}
