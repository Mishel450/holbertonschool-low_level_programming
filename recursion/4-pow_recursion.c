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
	if (y > 0)
	{
		i--;
		return (x * _pow_recursion(x, y));
	}
	if (i == 0)
	{
		return (0);
	}	
	return (0);
}
