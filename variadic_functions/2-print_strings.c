#include "variadic_functions.h"
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
	int Num;

	va_start(ar, n);

	Num = 0;
	for (i = 0; i < n; i++)
	{
		Num = va_arg(ar, int);
		printf("%d", Num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ar);
	printf("\n");
}
