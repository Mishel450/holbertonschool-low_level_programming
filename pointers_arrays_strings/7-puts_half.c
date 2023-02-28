#include "main.h"
#include <string.h>
/**
 * puts_half - check the code.
 * @str: is a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int size = strlen(str);
int sizeD = size / 2;
int i;
if (sizeD % 2 != 0)
{
sizeD++;
}
for (i = sizeD ; i <= size - 1; i++)
{
_putchar(str[i]);    
}
_putchar('\n');
}
