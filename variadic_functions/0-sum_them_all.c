#include "variadic_functions.h"
/**
 * sum_then_all - is a function thats sum all the numbers in a constant.
 * @n: is the number of numbers.
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
	va_list ar;
	unsigned int i;
	int sum;

	va_start(ar,n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ar,int);
	va_end(ar);
	return (sum);
}
return (0);
}
