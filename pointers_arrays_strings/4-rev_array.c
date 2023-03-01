#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - check the code.
 * @a: is a array.
 * @n: is a number.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int j = 0;
for (i = n - 1; i >= j ; i--)
{
printf("%d", a[i]);
if (i != j)
{
printf(", ");
}
if (i == j)
{
break;
}
}
}
