#include "variadic_functions.h"
#include <string.h>
/**
 * print_strings - is a functiont that prints strings.
 * @separator: are a "," and space between strings.
 * @n: is the number of strings.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int num;
	int check;

	va_start(ar, n);

	num = 0;
	for (i = 0; i < n; i++)
	{
		check = va_arg(ar, int);
		if (check == 0)
		{
			printf("(nil)");
		}
		else
		{
			num = va_arg(ar, int);
			printf("%d", num);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ar);
	printf("\n");
}
