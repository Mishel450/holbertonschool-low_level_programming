#include "main.h"
#include <string.h>
/**
 * print_rev - check the code.
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
