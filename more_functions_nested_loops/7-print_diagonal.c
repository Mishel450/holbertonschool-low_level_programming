#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - check the code.
 * @n: is a character.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int z;
for (i = 1 ; i <= n ; i++)
{
for (z = 1 ; z < i ; z++)
{
_putchar(' ');
}
z=1;
if (n >= 1)
{
_putchar(92);
}
_putchar('\n');
}
}
