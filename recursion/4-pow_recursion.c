#include "main.h"
/**
 *
 *
 *
 */
int _pow_recursion(int x, int y)
{
	int i = y;
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
		return (x * _pow_recursion(x, y, i - 1));
	}
	if (i == 1)
	{
		return (0);
	}	
	return (0);
}
