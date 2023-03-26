#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list ar;
char numC;
int numI;
float numF;
char *numS;

va_start(ar, format);

	switch(ar)
	{
case 'c':
numC = va_arg(ar, char);
printf("%d", numC);
break;
case 'i':
numI = va_arg(ar, int);
printf("%d", numI);
break;
case 'f':
numF = va_arg(ar, float);
printf("%f", numF);
break;
case 's':
numS = va_arg(ar, char *);
printf("%s", numS);
break;
	}
	va_end(ar);
}
