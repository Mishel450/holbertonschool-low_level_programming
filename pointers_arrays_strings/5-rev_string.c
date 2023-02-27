#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code.
 * @s: is a character
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i;
int size = strlen(s);
puts(s);
for (i = size - 1 ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
