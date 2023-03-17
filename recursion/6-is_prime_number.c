#include "main.h"
/**
 * mainOne - check the code.
 * @j: is (or not) the prime number
 * @i: is a number used to multiply.
 * @k: is a number used to multiply.
 * Return: 0 or 1.
 */
int mainOne(int j, int i, int k)
{
if (i * k == j && k != j)
	return (1);
if (i < j)
	return (mainOne(j, (i + 1), k));
if (i == j && k != j)
	return (mainOne(j, 1, (k + 1)));
else
	return (0);
}
/**
 * is_prime_number - check the code.
 * @n: is (or not) the prime number.
 * Return: mainOne.
 */
int is_prime_number(int n)
{
	return (mainOne(n, 1, 1));
}
