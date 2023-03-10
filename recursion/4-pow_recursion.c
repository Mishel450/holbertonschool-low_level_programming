#include "main.h"
/**
 * _pow_recursion - check the code.
 * @x: is a number.
 * @y: is a number.
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
