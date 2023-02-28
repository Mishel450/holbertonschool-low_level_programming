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
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
