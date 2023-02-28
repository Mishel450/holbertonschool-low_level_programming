#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code.
 * @str: is a string.
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
int size = strlen(str);
for (i = 0; i <= size - 1; i++)
{
if (i % 2 == 0 && i != 0)
{
_putchar(str[i]);
}
if (i == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
