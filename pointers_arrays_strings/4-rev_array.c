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
for (i = n ; i >= 0 ; i--)
{
printf("%d", a);
if (i != 0)
{
printf(", ");
}
}
}
