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
int size = strlen(str);
for (i = 0; i <= size; i++)
{
if (i == 0)
{
_putchar(*str);
}
if (i % 2 == 0)
{
_putchar(*str)
}
}
_putchar('\n')
}
