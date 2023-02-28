#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
int j = *str;
int size = strlen(str);
for (i = 0; i <= size -1; i++)
{
if (i % 2 == 0 && i != 0)
{
_putchar(j);
}
if (i == 0)
{
_putchar(j);
}
j++;
}
_putchar('\n');
}
