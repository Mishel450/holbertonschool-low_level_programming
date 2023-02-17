#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i;
int y;
for (y = 0 ; y <= 23 ; y++)
{
if (y <= 9)
{
_putchar('0');
}
_putchar(y);
_putchar(':');
for (i = 0 ; y <= 59 ; i++)
{
if (i <= 9)
{
_putchar('0');
}
_putchar(i);
 _putchar('\n');
}
}
}
