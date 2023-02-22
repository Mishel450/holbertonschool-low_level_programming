#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int j;
int z= 48;
for (i = 48 ; i <= 57 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j >= 10)
{
_putchar(49);
}
if (z == 58)
{
z= 48; 
}
_putchar(z);
z++;
}
_putchar('\n');
j= 0;
z= 48;
}
}
