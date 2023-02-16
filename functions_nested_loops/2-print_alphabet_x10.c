#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
int z;
for (i = 0 ; i < 10 ; i++)
{
for (z = 97 ; z <= 122 ; z++)
{
_putchar(z);
}
_putchar('\n');
}
}
