#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_all - check the code.
 * @format: the const of int, char, float and string.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	char *string;
	int i = 0, j, formatS;

	if (format)
		formatS = strlen(format);
	va_start(ar, format);
	while (format && format[i])
	{
		j = 0;
		switch(i)
		{
			case 'c':
				printf("%d", va_arg(ar, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
				j = 1;
				break;
			case 's':
				string = va_arg(x, char *);
				!string ? printf("(nil)") : printf("%s", string);
				j = 1;
				break;
		}
		if (cond == 1 && i < formatSelect - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ar);
}
