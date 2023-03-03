#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_memset - check the code.
 * @s: is a pointer.
 * @b: is a array.
 * @n: is a number.
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s[i]);
	printf("%d", b[i]);
	}
printf("\n");
return (s);
}
