#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - check the code
 * @i: is a character
 * Return: 0
 */
int print_last_digit(int i)
{
int j = (i % 10);
 j = ( j * (-1));
_putchar(j + '0');
return (j);
}
