#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code.
 * @a: is a string
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int size = strlen(*a);
for ( ; n <= size ; n++)
{
printf("%d, " a[n]);
}
printf("\n");
}
