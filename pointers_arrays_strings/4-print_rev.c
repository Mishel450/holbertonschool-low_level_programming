#include "main.h"
/**
 * reset_to_98 - check the code.
 * @n: is a character
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
for ( i = s ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
