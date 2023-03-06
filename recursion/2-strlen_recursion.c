#include "main.h"
/**
 * _strlen_recursion - check the code.
 * @s: is a string.
 * Return: nothing.
 */
int _strlen_recursion(char *s)
{
int i = 0; 
if (*(s + i) != '\0')
{
i++;
_strlen_recursion(s);
}
else
{
return (i);
}
}
