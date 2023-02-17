#include "main.h"
#include <stdio.h>
/**
 * _abs - check the code
 * @r: is a character
 * Return: Always 0
 */
int _abs(int r)
{
if (r >= 0)
return (r);
if (r < -1)
{
r = (r * (-1));
return (r);
}
return (0);
}
