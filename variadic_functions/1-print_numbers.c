#include "variadic_functions.h"
/**
 * print_numbers - is a function that prints all of its numbers.
 * @separator: is a "," and space between numbers.
 * @n: is the number of numbers.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
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
