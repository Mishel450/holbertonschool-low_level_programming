#include "main.h"
/**
 * _strlen_recursion - check the code.
 * @s: is a string.
 * Return: nothing.
 */
int _strlen_recursion(char *s);
{
	int i;

	if (*s == '\0')
	{
		return (i);
	}
	i = _strlen_recursion(s + 1);
}
