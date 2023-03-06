#include "main.h"
/**
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int size = strlen(s);
int i = size - 1;

	_putchar(i);
	i--;
	if (i == 0)
	{
		_putchar(10);
	}
}
