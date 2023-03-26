#include "variadic_functions.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list ar;
char i;

va_start(ar, formart);

while (i < format)
{
	switch()
	{
case 'c':
char numC;
numC = va_arg(ar, char);
printf("%s", numC);
break;
case 'i':
int numI;
numI = va_arg(ar, int);
printf("%d", numI);
break;
case 'f':
float numF;
numF = va_arg(ar, float);
printf("%f", numF);
break;
case 's':
char *numS;
numS = va_arg(ar, char *);
printf("%s", numS);
break;
	}

}			va_end(ar);
}
