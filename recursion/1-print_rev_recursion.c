#include "main.h"
/**
 * _print_rev_recursion - check the code.
 * @s: is a string.
 * Return: noting.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
