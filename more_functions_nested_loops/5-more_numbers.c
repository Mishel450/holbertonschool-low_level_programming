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
_putchar(z);
z++;
}
_putchar('\n');
}
}
