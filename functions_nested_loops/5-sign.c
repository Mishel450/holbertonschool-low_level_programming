#include "main.h"
/**
 * print_sign - check the code.
 * @n: is a character
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
if (n < 0)
{
putchar(45);
return (-1);
}
purchar(48);
return (0);
}
