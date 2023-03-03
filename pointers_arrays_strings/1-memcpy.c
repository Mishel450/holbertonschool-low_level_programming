#include "main.h"
#include <string.h>
/**
 * *_memscpy - check the code.
 * @dest: is a pointer.
 * @src: is a pointer.
 * @n: is a number.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
