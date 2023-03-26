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
char *i;


va_start(ar, format);

while (i < format)
{
	switch(ar)
	{
case 'c':
char numC;
numC = va_arg(ar, char);
printf("%d", numC);
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
i++
}			va_end(ar);
}
