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
for (j = 1 ; j <= size ; j++)
{
for (i = 1 ; i <= size ; i++)
{
if(i < z)
{
_putchar(32);
}
if (i >= z)
{
_putchar(35);
}
}
i = 1;
z--;
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
