#include "main.h"
#include <stdio.h>
/**
 * print_square - check the code.
 * @size: is a chaacter
 * Return: Always 0.
 */
void print_square(int size)
{
int i;
int j;
for (j = 1 ; j <= size ; j++)
{
for (i = 1 ; i <= size ; i++)
{
_putchar(35);
}
i = 1;
_putchar('\n');
}
