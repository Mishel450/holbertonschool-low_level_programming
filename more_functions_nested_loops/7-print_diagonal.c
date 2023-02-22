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
for (i = 1 ; i <= n ; i++)
{
_putchar(' ');
}
if (n >= 1)
{
_putchar(92);
_putchar('\n');
}
}
