#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check the code.
 * @size: is a chaacter
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i;
int j;
int z =size;
int y;
for (j = 1 ; j <= size ; j++)
{
for (i = 1 ; i <= z ; i++)
{
_putchar(32);
}
i = 1;
for (y = z ; y <= size)
{
_putchar(35);
}
_putchar('\n');
z--
}
if (size <= 0)
{
_putchar('\n');
}
}
