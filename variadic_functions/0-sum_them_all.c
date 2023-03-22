#include "variadic_fuctions.h"
/**
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int i;
	int sum;

	va_start (ar, count);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ar, int);
	va_end (ar);
	return (sum);
}
