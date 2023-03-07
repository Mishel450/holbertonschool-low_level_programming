#include "main.h"
/**
 * main - check the code.
 * @j: is a number.
 * @i: is a number.
 * Return: a number or -1.
 */
int main(int j, int i)
{
	int k;

	k = i * i;
	if (k == j)
	{
		return (i);
	}
	else if (k < j)
	{
		return (main(j,(i + 1)));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - check the code.
 * @n: is the number.
 * Return: main.
 */
int _sqrt_recursion(int n)
{
	return (main(n, 1));
}
