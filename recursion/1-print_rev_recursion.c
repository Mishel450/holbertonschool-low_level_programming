#include "main.h"
/**
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int i = size - 1;
	int size = strlen(s);

	_putchar(i);
	i--;
	if (i == 0)
	{
		_putchar(10);
	}
}
