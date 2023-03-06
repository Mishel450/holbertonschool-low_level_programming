#include "main.h"
void main()
{
int i = 0;
}
/**
 * _strlen_recursion - check the code.
 * @s: is a string.
 * Return: nothing.
 */
int _strlen_recursion(char *s)
{ 
if (*s != '\0')
{
i++;
s++;
_strlen_recursion(s);
}
return (i);
}
