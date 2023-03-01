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
int j[1000];
for (i = n - 1; i >= 0 ; i--)
{
j[i] = a[i];
}
a = j;
}
