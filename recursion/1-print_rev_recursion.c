#include "main.h"
/**
 * _print_rev_recursion - check the code.
 * @s: is a string.
 * Return: noting.
 */
void _print_rev_recursion(char *s)
{
	int size = strlen(s);

	if (*s == size - 1)
	{
		_putchar(10);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
